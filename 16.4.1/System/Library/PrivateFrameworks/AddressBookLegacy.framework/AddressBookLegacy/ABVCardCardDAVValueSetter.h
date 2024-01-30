@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter {
    BOOL _importingToExistingGroup;
}

@property BOOL recordIsGroup;

+ (int)groupPropertyForPersonProperty:(int)a0;
+ (struct __CFDictionary { } *)_personToGroupPropertyMap;

- (void *)valueForProperty:(unsigned int)a0;
- (BOOL)setValue:(void *)a0 forProperty:(unsigned int)a1;
- (id)imageData;
- (void)_drainExistingProperties;
- (void *)copyParsedRecordWithSource:(void *)a0 outRecordType:(unsigned int *)a1;
- (id)initWithGroup:(void *)a0 removeExistingProperties:(BOOL)a1;
- (id)initWithPerson:(void *)a0 removeExistingProperties:(BOOL)a1;
- (BOOL)propertyIsValidForPerson:(unsigned int)a0;
- (BOOL)setImageData:(id)a0 cropRectX:(int)a1 cropRectY:(int)a2 cropRectWidth:(int)a3 cropRectHeight:(int)a4;

@end
