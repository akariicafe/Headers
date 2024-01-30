@interface _UIDocumentPickerDocumentCell : _UIDocumentPickerCell

@property (nonatomic) BOOL enabled;

- (void)updateContents;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)_showPickableDiagnostic;
- (void)reloadItem:(BOOL)a0;
- (void)updateThumbnail;

@end
