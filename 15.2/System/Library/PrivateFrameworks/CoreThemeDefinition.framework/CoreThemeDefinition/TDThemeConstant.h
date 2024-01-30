@interface TDThemeConstant : NSManagedObject {
    int _identifier;
}

- (id)displayName;
- (unsigned int)identifier;
- (void)setDisplayName:(id)a0;
- (id)debugDescription;
- (void)setIdentifier:(unsigned int)a0;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)a0;
- (id)constantName;
- (void)setConstantName:(id)a0;

@end
