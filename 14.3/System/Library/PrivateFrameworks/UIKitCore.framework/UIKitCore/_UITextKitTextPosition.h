@interface _UITextKitTextPosition : UITextPosition

@property long long offset;
@property long long affinity;

+ (id)positionWithOffset:(long long)a0 affinity:(long long)a1;
+ (id)positionWithOffset:(long long)a0;

- (id)init;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
