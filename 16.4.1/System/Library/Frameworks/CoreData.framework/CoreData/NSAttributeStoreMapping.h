@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
    int _externalType;
    unsigned int _externalPrecision;
    int _externalScale;
}

- (id)initWithProperty:(id)a0;
- (id)sqlType;
- (id)attribute;
- (BOOL)isEqual:(id)a0;
- (int)externalType;
- (void)setExternalType:(int)a0;

@end
