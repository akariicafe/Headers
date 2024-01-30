@interface ICAttachmentsFilterTypeSelection : ICFilterTypeSelection

@property (nonatomic) unsigned long long selectionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)filterType;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)filterName;
- (unsigned long long)hash;
- (id)initWithAttachmentSection:(short)a0;
- (id)initWithSelectionType:(unsigned long long)a0;
- (BOOL)isEqualToICAttachmentsFilterTypeSelection:(id)a0;
- (id)rawFilterValue;

@end
