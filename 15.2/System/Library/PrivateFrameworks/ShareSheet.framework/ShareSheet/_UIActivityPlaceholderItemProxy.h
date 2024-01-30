@interface _UIActivityPlaceholderItemProxy : NSProxy <NSCopying> {
    id _uikit_placeholderItem;
}

@property (readonly, nonatomic) id placeholderItem;

+ (id)unproxiedItemsForItems:(id)a0;
+ (id)unproxiedItemForItem:(id)a0;

- (id)placeholderItem;
- (id)methodSignatureForSelector:(SEL)a0;
- (Class)superclass;
- (id)description;
- (BOOL)isProxy;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlaceholderItem:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)class;
- (unsigned long long)hash;
- (BOOL)respondsToSelector:(SEL)a0;

@end
