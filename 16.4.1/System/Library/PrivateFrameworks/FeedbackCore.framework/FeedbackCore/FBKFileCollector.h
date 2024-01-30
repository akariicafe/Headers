@class NSString, NSURL, NSMutableSet, FBKDECollector;
@protocol FBKAttachmentListenerDelegate, FBKFilerForm;

@interface FBKFileCollector : NSObject <FBKAttachmentProvider>

@property (retain) NSMutableSet *_attachments;
@property (retain) NSURL *submissionDir;
@property (retain, nonatomic) id<FBKFilerForm> filerForm;
@property (weak) id<FBKAttachmentListenerDelegate> listener;
@property (retain, nonatomic) FBKDECollector *deCollector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diskAccessQueue;
+ (void)findExistingFilesForFilerForm:(id)a0 matcherPredicates:(id)a1 completion:(id /* block */)a2;

- (id)attachments;
- (id)identifier;
- (id)platform;
- (id)requirements;
- (id)currentDeviceIdentifier;
- (void).cxx_destruct;
- (void)removeAttachment:(id)a0;
- (void)removeAllAttachments;
- (void)_addAttachment:(id)a0;
- (void)_removeAttachment:(id)a0;
- (id)diskAccessQueue;
- (id)_fileProcessingQueue;
- (BOOL)hasFilePromises;
- (void)_attachURL:(id)a0 toAttachment:(id)a1;
- (void)_updateAttachment:(id)a0 withState:(long long)a1;
- (void)addAttachmentWithItemProvider:(id)a0;
- (void)addFileFromItemProvider:(id)a0;
- (void)addFileFromURL:(id)a0 byMoving:(BOOL)a1;
- (void)addImageWithItemProvider:(id)a0;
- (void)addVideoFromItemProvider:(id)a0;
- (id)attachDraftFiles:(id)a0 withRequirements:(id)a1;
- (id)attachLocalFiles:(id)a0 withRequirements:(id)a1 shouldCopyFiles:(BOOL)a2;
- (id)attachURLSchemeFiles:(id)a0 withRequirements:(id)a1;
- (void)cancelCollection:(id)a0;
- (void)commitWithForm:(id)a0 withCompletion:(id /* block */)a1;
- (id)diagnosticExtensionAttachments;
- (id)existingAttachmentRegexMatchingFile:(id)a0;
- (id)getUniqueFileNameForAttachmentType:(long long)a0;
- (BOOL)hasUnmetRequirements;
- (id)initWithFilerForm:(id)a0;
- (id)newAttachmentWithType:(long long)a0;
- (void)processFileFromURL:(id)a0 movingFile:(BOOL)a1 forAttachment:(id)a2;
- (void)reportAttachingErrorWithAttachment:(id)a0 userFriendlyError:(id)a1;
- (void)saveDraftsDirectory;
- (void)updateRequirements:(id)a0;

@end
