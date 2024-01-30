@class NSString, IKViewElement;

@interface _TVShadowViewElementID : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, nonatomic) IKViewElement *viewElement;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithViewElement:(id)a0;

@end
