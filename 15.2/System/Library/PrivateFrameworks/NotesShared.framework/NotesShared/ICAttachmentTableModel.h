@class ICTableVersionedDocument, ICTable;

@interface ICAttachmentTableModel : ICAttachmentModel

@property (retain, nonatomic) ICTableVersionedDocument *tableDocument;
@property (readonly, nonatomic) ICTable *table;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;
+ (id)tableFromAttributedString:(id)a0 managedObjectContext:(id)a1 replicaID:(id)a2;

- (BOOL)mergeWithMergeableData:(id)a0;
- (void).cxx_destruct;
- (id)searchableTextContentInNote;
- (void)attachmentWillTurnIntoFault;
- (void)attachmentWillRefresh:(BOOL)a0;
- (void)attachmentDidRefresh:(BOOL)a0;
- (void)writeMergeableData;
- (BOOL)providesTextContentInNote;
- (id)textContentInNote;
- (void)removeTimestampsForReplicaID:(id)a0;
- (void)noteWillAddOrRemovePassword;
- (void)updateAfterLoadWithInlineAttachmentIdentifierMap:(id)a0;
- (id)mergeableDataForCopying:(id *)a0;
- (void)regenerateTextContentInNote;
- (void)attachmentAwakeFromFetch;
- (void)willMarkAttachmentForDeletion;
- (BOOL)isReadyToPresent;
- (id)localizedFallbackTitle;
- (id)localizedFallbackSubtitleIOS;
- (id)localizedFallbackSubtitleMac;
- (void)replaceChildInlineAttachment:(id)a0 withText:(id)a1;
- (void)mergeTablePrimitiveData;
- (id)stringsAtRow:(unsigned long long)a0;
- (void)updateAttachmentByMergingWithTableData:(id)a0;

@end
