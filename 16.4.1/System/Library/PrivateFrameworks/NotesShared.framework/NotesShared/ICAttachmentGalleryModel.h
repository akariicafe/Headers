@class TTOrderedSetVersionedDocument, CROrderedSet;

@interface ICAttachmentGalleryModel : ICAttachmentModel

@property (retain, nonatomic) TTOrderedSetVersionedDocument *attachmentIdentifiersOrderedSetDocument;
@property (readonly, nonatomic) CROrderedSet *attachmentIdentifiersOrderedSet;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (void).cxx_destruct;
- (BOOL)hasThumbnailImage;
- (void)addSubAttachment:(id)a0;
- (void)enumerateSubAttachmentsWithBlock:(id /* block */)a0;
- (id)firstSubAttachment;
- (BOOL)hasPreviews;
- (BOOL)mergeWithMergeableData:(id)a0 mergeableFieldState:(id)a1;
- (long long)previewImageOrientation;
- (id)previewImageTypeUTI;
- (BOOL)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)a0;
- (BOOL)showThumbnailInNoteList;
- (unsigned long long)subAttachmentsCount;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)a0;
- (void)writeMergeableData;
- (id)subAttachmentIdentifierAtIndex:(unsigned long long)a0;
- (id)attachmentIdentifiersOrderedSet;
- (void)attachmentDidRefresh:(BOOL)a0;
- (BOOL)attachmentHasMergeableData;
- (void)attachmentWillRefresh:(BOOL)a0;
- (void)attachmentWillTurnIntoFault;
- (BOOL)canSaveURL;
- (BOOL)canSaveURLWithOtherAttachments;
- (unsigned long long)indexOfSubAttachmentWithIdentifier:(id)a0;
- (void)insertSubAttachment:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)providesStandaloneTitleForNote;
- (void)removeSubAttachment:(id)a0;
- (id)searchableStringArray;
- (id)searchableTextContent;
- (short)sectionForSubAttachments;
- (id)singleSubAttachmentAtIndex:(unsigned long long)a0;
- (id)standaloneTitleForNote;
- (id)subAttachmentIdentifiers;
- (id)titleForSubAttachment:(id)a0;
- (void)undeleteSubAttachments;
- (void)updateAttachmentMarkedForDeletionStateAttachmentIsInUse:(BOOL)a0;

@end
