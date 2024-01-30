@interface TSPDataAttributes : NSObject <NSCopying>

+ (id)_classRegistry;
+ (id)newDataAttributesWithMessage:(const void *)a0;
+ (void)registerDataAttributesClass:(Class)a0 forExtensionNumber:(int)a1;

- (id)initWithMessage:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveToMessage:(void *)a0;

@end
