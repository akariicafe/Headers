@class NSArray, NSDictionary;

@interface PSSegmentTableCell : PSControlTableCell {
    NSArray *_values;
    NSDictionary *_titleDict;
}

- (id)newControl;
- (id)controlValue;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setValue:(id)a0;
- (void)setValues:(id)a0 titleDictionary:(id)a1;

@end
