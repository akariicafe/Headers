@protocol NSTextLocation;

@interface _UITextKitTextPosition : UITextPosition

@property (readonly, nonatomic) long long offset;
@property (readonly, nonatomic) long long affinity;
@property (readonly, nonatomic) id<NSTextLocation> location;

+ (id)positionWithOffset:(long long)a0;
+ (id)positionWithTextContentManager:(id)a0 location:(id)a1 affinity:(long long)a2;
+ (id)positionWithOffset:(long long)a0 affinity:(long long)a1;

- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
