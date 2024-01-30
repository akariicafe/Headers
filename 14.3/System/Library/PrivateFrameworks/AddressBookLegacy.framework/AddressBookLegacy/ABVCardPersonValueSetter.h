@interface ABVCardPersonValueSetter : ABVCardValueSetter {
    void *_person;
    struct __CFArray { } *_properties;
}

+ (struct __CFArray { } *)supportedProperties;

- (id)fullName;
- (void *)valueForProperty:(unsigned int)a0;
- (id)imageData;
- (void)dealloc;
- (id)initWithPerson:(void *)a0;
- (struct __CFArray { } *)foundProperties;
- (BOOL)setImageData:(id)a0 cropRectX:(int)a1 cropRectY:(int)a2 cropRectWidth:(int)a3 cropRectHeight:(int)a4;
- (void)setValueInTemporaryCache:(id)a0 forProperty:(unsigned int)a1;
- (BOOL)setValue:(void *)a0 forProperty:(unsigned int)a1;

@end
