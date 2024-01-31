@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
    int _externalType;
    unsigned int _externalPrecision;
    int _externalScale;
}

- (id)attribute;
- (id)initWithProperty:(id)a0;
- (id)sqlType;
- (void)setExternalType:(int)a0;
- (BOOL)isEqual:(id)a0;
- (int)externalType;

@end
