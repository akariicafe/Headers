@protocol UIVectorOperatable;

@interface _UIViewPropertyInfo : NSObject <NSCopying>

@property (retain, nonatomic) id<UIVectorOperatable> previousValue;
@property (retain, nonatomic) id<UIVectorOperatable> value;

+ (id)viewPropertyInfoWithValue:(id)a0 previousValue:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
