@class NSString;

@interface _EFBufferedQueueStrategy : NSObject <EFQueueingStrategy>

@property (readonly, nonatomic) id /* block */ batchHandler;
@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) NSString *descriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
