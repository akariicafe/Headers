@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
    int _externalType;
    unsigned int _externalPrecision;
    int _externalScale;
}

- (unsigned int)externalPrecision;
- (int)externalScale;
- (id)attribute;
- (int)externalType;
- (id)sqlType;
- (id)initWithProperty:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setExternalType:(int)a0;
- (void)setExternalScale:(int)a0;
- (id)columnDefinition;
- (void)setExternalPrecision:(unsigned int)a0;

@end
