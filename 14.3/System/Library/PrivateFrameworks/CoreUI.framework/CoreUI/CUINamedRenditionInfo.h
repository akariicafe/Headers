@interface CUINamedRenditionInfo : NSObject <NSCopying> {
    void *_bitmap;
    const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *_keyFormat;
}

- (id)initWithKeyFormat:(const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *)a0;
- (unsigned short)getClosestValueOfAttribute:(int)a0 withValue:(unsigned short)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)incrementIndex:(unsigned long long *)a0 inValues:(id)a1 forAttribute:(int)a2;
- (id)bitwiseAndWith:(id)a0;
- (id)initWithData:(id)a0 andKeyFormat:(const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *)a1;
- (void)decrementValue:(long long *)a0 forAttribute:(int)a1;
- (BOOL)contentEqualForAttribute:(int)a0 withRenditionInfo:(id)a1;
- (int)attributePresent:(int)a0 withValue:(unsigned short)a1;
- (BOOL)isEqualToNamedRenditionInfo:(id)a0;
- (unsigned long long)numberOfBitsSet;
- (void)clearAttributePresent:(int)a0 withValue:(unsigned short)a1;
- (BOOL)diverseContentPresentForAttribute:(int)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned short)getValueOfAttribute:(int)a0;
- (id)archivedData;
- (id)debugDescription;
- (BOOL)contentPresentForAttribute:(int)a0;
- (void)setAttributePresent:(int)a0 withValue:(unsigned short)a1;

@end
