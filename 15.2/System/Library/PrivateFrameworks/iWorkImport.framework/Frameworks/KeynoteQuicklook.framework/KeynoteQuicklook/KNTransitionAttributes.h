@interface KNTransitionAttributes : KNAnimationAttributes

+ (id)defaultAttributesForEffect:(id)a0;
+ (id)supportedCustomAttributes;
+ (BOOL)customAttributeKeyIsValid:(id)a0;
+ (void)p_readSharedAttributesForArchive:(void *)a0 intoDictionary:(id)a1;
+ (id)p_readDeprecatedAttributesForArchive:(const void *)a0 intoDictionary:(id)a1;
+ (void)p_readTransitionAttributesForArchive:(const void *)a0 intoDictionary:(id)a1;

- (id)initFromTransitionAttributesArchive:(const void *)a0;
- (void)encodeToArchive:(void *)a0;
- (void)p_writeSharedAttributesToArchive:(void *)a0;
- (void)p_writeTransitionAttributesToArchive:(void *)a0;

@end
