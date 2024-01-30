@interface TDThemeConstant : NSManagedObject {
    int _identifier;
}

- (void)setDisplayName:(id)a0;
- (id)debugDescription;
- (void)setIdentifier:(unsigned int)a0;
- (unsigned int)identifier;
- (id)displayName;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)a0;
- (id)constantName;
- (void)setConstantName:(id)a0;

@end
