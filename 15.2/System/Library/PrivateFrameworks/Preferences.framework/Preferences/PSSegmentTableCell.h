@class NSArray, NSDictionary;

@interface PSSegmentTableCell : PSControlTableCell {
    NSArray *_values;
    NSDictionary *_titleDict;
}

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (void)layoutSubviews;
- (void)setValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)newControl;
- (id)titleLabel;
- (void)prepareForReuse;
- (void)setValues:(id)a0 titleDictionary:(id)a1;
- (id)controlValue;

@end
