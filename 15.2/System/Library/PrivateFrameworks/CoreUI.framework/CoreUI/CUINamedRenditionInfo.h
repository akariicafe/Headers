@interface CUINamedRenditionInfo : NSObject <NSCopying> {
    void *_bitmap;
    const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *_keyFormat;
}

- (id)archivedData;
- (id)initWithKeyFormat:(const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *)a0;
- (id)bitwiseAndWith:(id)a0;
- (int)attributePresent:(int)a0 withValue:(unsigned short)a1;
- (void)incrementIndex:(unsigned long long *)a0 inValues:(id)a1 forAttribute:(int)a2;
- (unsigned long long)numberOfBitsSet;
- (BOOL)isEqualToNamedRenditionInfo:(id)a0;
- (id)description;
- (BOOL)diverseContentPresentForAttribute:(int)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned short)getValueOfAttribute:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAttributePresent:(int)a0 withValue:(unsigned short)a1;
- (void)decrementValue:(long long *)a0 forAttribute:(int)a1;
- (void)clearAttributePresent:(int)a0 withValue:(unsigned short)a1;
- (id)initWithData:(id)a0 andKeyFormat:(const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *)a1;
- (void)dealloc;
- (unsigned short)getClosestValueOfAttribute:(int)a0 withValue:(unsigned short)a1;
- (BOOL)contentPresentForAttribute:(int)a0;
- (BOOL)contentEqualForAttribute:(int)a0 withRenditionInfo:(id)a1;
- (id)debugDescription;

@end
