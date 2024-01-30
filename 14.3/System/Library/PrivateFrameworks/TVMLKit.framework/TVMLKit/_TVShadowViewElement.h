@class NSArray, _TVShadowViewElementID;

@interface _TVShadowViewElement : NSObject

@property (copy, nonatomic) _TVShadowViewElementID *elementID;
@property (copy, nonatomic) NSArray *children;
@property (weak, nonatomic) _TVShadowViewElement *parent;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
