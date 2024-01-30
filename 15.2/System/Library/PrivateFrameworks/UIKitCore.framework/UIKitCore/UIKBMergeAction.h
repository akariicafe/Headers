@class NSString, NSArray, UIKBGeometry;

@interface UIKBMergeAction : NSObject <NSCopying>

@property (retain, nonatomic) NSString *remainingKeyName;
@property (retain, nonatomic) NSString *disappearingKeyName;
@property (retain, nonatomic) NSArray *orderedKeyList;
@property (retain, nonatomic) UIKBGeometry *factors;

+ (id)mergeActionWithRemainingKeyName:(id)a0 disappearingKeyName:(id)a1 factors:(id)a2;
+ (id)mergeActionWithOrderedKeyList:(id)a0 factors:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
