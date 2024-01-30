@class NSString, NSDictionary;

@interface GPURawCounterSourceTriggerSelect : NSObject

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *options;

+ (id)selectWithName:(id)a0 options:(id)a1;

- (id)initWithName:(id)a0 options:(id)a1;
- (id)description;
- (void)dealloc;

@end
