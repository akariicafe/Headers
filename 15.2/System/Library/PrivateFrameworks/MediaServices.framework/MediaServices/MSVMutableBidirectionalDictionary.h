@interface MSVMutableBidirectionalDictionary : MSVBidirectionalDictionary

+ (BOOL)supportsSecureCoding;

- (void)removeKeyForObject:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)setKey:(id)a0 forObject:(id)a1;

@end
