@class NSString, NSDictionary;

@interface _GPURawCounterSourceTrigger : NSObject <GPURawCounterSourceTrigger>

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *options;

- (void)dealloc;
- (id)initWithName:(id)a0 description:(id)a1 options:(id)a2;

@end
