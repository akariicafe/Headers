@class ICTableVersionedDocument, ICTable;

@interface ICAttachmentTableModel : ICAttachmentModel

@property (retain, nonatomic) ICTableVersionedDocument *tableDocument;
@property (readonly, nonatomic) ICTable *table;

+ (id)tableFromAttributedString:(id)a0 managedObjectContext:(id)a1;
+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (void)updateAttachmentByMergingWithTableData:(id)a0;
- (void).cxx_destruct;
- (void)noteWillAddOrRemovePassword;
- (void)attachmentWillTurnIntoFault;
- (void)attachmentWillRefresh:(BOOL)a0;
- (void)attachmentDidRefresh:(BOOL)a0;
- (BOOL)mergeWithMergeableData:(id)a0;
- (void)writeMergeableData;
- (BOOL)providesTextContentInNote;
- (id)textContentInNote;
- (id)localizedFallbackTitle;
- (id)searchableTextContentInNote;
- (void)regenerateTextContentInNote;
- (void)attachmentAwakeFromFetch;
- (void)willMarkAttachmentForDeletion;
- (BOOL)isReadyToPresent;
- (id)localizedFallbackSubtitleIOS;
- (id)localizedFallbackSubtitleMac;
- (void)mergeTablePrimitiveData;
- (id)stringsAtRow:(unsigned long long)a0;

@end
