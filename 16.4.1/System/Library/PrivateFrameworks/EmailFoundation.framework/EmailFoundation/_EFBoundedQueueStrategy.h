@class NSString;

@interface _EFBoundedQueueStrategy : NSObject <EFQueueingStrategy>

@property (readonly, nonatomic) id /* block */ overflowHandler;
@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) NSString *descriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
