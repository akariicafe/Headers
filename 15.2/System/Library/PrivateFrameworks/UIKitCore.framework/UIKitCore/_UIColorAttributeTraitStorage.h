@class _UICoreUICatalogColorWrapper;

@interface _UIColorAttributeTraitStorage : _UITraitStorage <NSCoding> {
    _UICoreUICatalogColorWrapper *_namedColor;
}

- (void)encodeWithCoder:(id)a0;
- (id)initWithObject:(id)a0 keyPath:(id)a1 color:(id)a2;
- (id)_propertyDescriptionString;
- (void)applyRecordsMatchingTraitCollection:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
