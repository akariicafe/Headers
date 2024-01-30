@class NSString, IKViewElement;

@interface _TVShadowViewElementID : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, nonatomic) IKViewElement *viewElement;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithViewElement:(id)a0;

@end
