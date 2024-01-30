@class NSString;

@interface _EFDefaultQueueingStrategy : NSObject <EFQueueingStrategy>

@property (readonly, nonatomic) NSString *descriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enqueueObject:(id)a0 replaceIfExists:(BOOL)a1 buffer:(id)a2;
- (void)dequeueObject:(id)a0 buffer:(id)a1;

@end
