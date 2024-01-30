@class NSArray, _TVShadowViewElementID, NSString;

@interface _TVShadowViewElement : NSObject

@property (copy, nonatomic) _TVShadowViewElementID *elementID;
@property (copy, nonatomic) NSArray *children;
@property (weak, nonatomic) _TVShadowViewElement *parent;
@property (copy, nonatomic) NSString *resourceName;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
