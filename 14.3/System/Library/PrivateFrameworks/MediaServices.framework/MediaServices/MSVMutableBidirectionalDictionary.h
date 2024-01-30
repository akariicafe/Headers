@interface MSVMutableBidirectionalDictionary : MSVBidirectionalDictionary

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setKey:(id)a0 forObject:(id)a1;
- (void)removeKeyForObject:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;

@end
