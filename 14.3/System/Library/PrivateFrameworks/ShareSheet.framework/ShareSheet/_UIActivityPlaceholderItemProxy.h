@interface _UIActivityPlaceholderItemProxy : NSProxy <NSCopying> {
    id _uikit_placeholderItem;
}

@property (readonly, nonatomic) id placeholderItem;

+ (id)unproxiedItemsForItems:(id)a0;
+ (id)unproxiedItemForItem:(id)a0;

- (Class)class;
- (Class)superclass;
- (BOOL)isProxy;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)placeholderItem;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlaceholderItem:(id)a0;

@end
