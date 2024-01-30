@interface ICAttachmentMapModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (id)MKMapItem;
- (void)addLocation;
- (BOOL)hasPreviews;
- (BOOL)previewsSupportMultipleAppearances;
- (BOOL)preferLocalPreviewImages;
- (BOOL)shouldSyncPreviewImageToCloud:(id)a0;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;

@end
