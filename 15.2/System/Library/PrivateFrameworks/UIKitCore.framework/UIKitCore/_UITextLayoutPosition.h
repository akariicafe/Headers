@protocol NSTextLocation;

@interface _UITextLayoutPosition : UITextPosition <NSCopying>

@property (readonly, nonatomic) id<NSTextLocation> location;
@property (readonly, nonatomic) long long affinity;

+ (id)textPositionWithLocation:(id)a0 affinity:(long long)a1;
+ (id)textPositionWithLocation:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToTextLayoutPosition:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
