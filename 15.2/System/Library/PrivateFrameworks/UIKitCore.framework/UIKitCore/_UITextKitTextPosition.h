@interface _UITextKitTextPosition : UITextPosition

@property long long offset;
@property long long affinity;

+ (id)positionWithOffset:(long long)a0;
+ (id)positionWithOffset:(long long)a0 affinity:(long long)a1;

- (long long)compare:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
