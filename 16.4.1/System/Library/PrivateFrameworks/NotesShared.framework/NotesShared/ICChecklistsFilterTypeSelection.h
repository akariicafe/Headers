@interface ICChecklistsFilterTypeSelection : ICFilterTypeSelection <NSCopying>

@property (readonly, nonatomic) unsigned long long selectionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)filterType;
- (BOOL)isEqual:(id)a0;
- (id)filterName;
- (unsigned long long)hash;
- (id)initWithSelectionType:(unsigned long long)a0;
- (BOOL)isEqualToICChecklistsFilterTypeSelection:(id)a0;
- (id)rawFilterValue;

@end
