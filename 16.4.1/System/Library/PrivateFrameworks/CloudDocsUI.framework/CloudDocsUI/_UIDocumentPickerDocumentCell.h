@interface _UIDocumentPickerDocumentCell : _UIDocumentPickerCell

@property (nonatomic) BOOL enabled;

- (void)prepareForReuse;
- (void)updateContents;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateThumbnail;
- (void)_showPickableDiagnostic;
- (void)reloadItem:(BOOL)a0;

@end
