@protocol NSCopying;

@interface IAMValueEvent : IAMEvent

@property (copy, nonatomic) id<NSCopying> value;

- (id)initWithName:(id)a0 value:(id)a1;
- (void).cxx_destruct;

@end
