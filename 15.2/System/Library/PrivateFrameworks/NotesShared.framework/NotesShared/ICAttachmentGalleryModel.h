@class TTOrderedSetVersionedDocument, CROrderedSet;

@interface ICAttachmentGalleryModel : ICAttachmentModel

@property (retain, nonatomic) TTOrderedSetVersionedDocument *attachmentIdentifiersOrderedSetDocument;
@property (readonly, nonatomic) CROrderedSet *attachmentIdentifiersOrderedSet;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (BOOL)mergeWithMergeableData:(id)a0;
- (BOOL)hasThumbnailImage;
- (void).cxx_destruct;
- (BOOL)hasPreviews;
- (BOOL)showThumbnailInNoteList;
- (BOOL)providesStandaloneTitleForNote;
- (id)standaloneTitleForNote;
- (id)searchableTextContent;
- (id)firstSubAttachment;
- (unsigned long long)subAttachmentsCount;
- (id)singleSubAttachmentAtIndex:(unsigned long long)a0;
- (id)attachmentIdentifiersOrderedSet;
- (void)insertSubAttachment:(id)a0 atIndex:(unsigned long long)a1;
- (id)subAttachmentIdentifiers;
- (BOOL)attachmentHasMergeableData;
- (id)subAttachmentIdentifierAtIndex:(unsigned long long)a0;
- (void)updateAttachmentMarkedForDeletionStateAttachmentIsInUse:(BOOL)a0;
- (id)searchableStringArray;
- (void)enumerateSubAttachmentsWithBlock:(id /* block */)a0;
- (long long)previewImageOrientation;
- (void)attachmentWillTurnIntoFault;
- (void)attachmentWillRefresh:(BOOL)a0;
- (void)attachmentDidRefresh:(BOOL)a0;
- (BOOL)canSaveURL;
- (BOOL)canSaveURLWithOtherAttachments;
- (id)previewImageTypeUTI;
- (id)titleForSubAttachment:(id)a0;
- (BOOL)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)a0;
- (void)addSubAttachment:(id)a0;
- (void)removeSubAttachment:(id)a0;
- (unsigned long long)indexOfSubAttachmentWithIdentifier:(id)a0;
- (void)writeMergeableData;
- (short)sectionForSubAttachments;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)a0;
- (void)undeleteSubAttachments;

@end
