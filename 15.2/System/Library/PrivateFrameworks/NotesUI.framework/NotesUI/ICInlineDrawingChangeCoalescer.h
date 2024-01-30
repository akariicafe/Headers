@class NSManagedObjectContext, PKDrawing, ICSelectorDelayer, ICAttachment;

@interface ICInlineDrawingChangeCoalescer : NSObject

@property (retain, nonatomic) ICAttachment *attachment;
@property (retain, nonatomic) ICSelectorDelayer *processChangesSelectorDelayer;
@property (retain, nonatomic) PKDrawing *latestDrawing;
@property (nonatomic) unsigned long long numberOfChanges;
@property (retain, nonatomic) NSManagedObjectContext *workerContext;
@property (retain, nonatomic) NSManagedObjectContext *mainContext;
@property (retain, nonatomic) NSManagedObjectContext *handwritingRecognitionContext;

+ (id)missingOrOutdatedHandwritingSummaryAttachmentIDsInContext:(id)a0;
+ (id)handwritingSummaryAttachmentsInContext:(id)a0;
+ (void)generateMissingOrOutdatedHandwritingSummariesInContext:(id)a0;
+ (void)purgeHandwritingSummariesInContext:(id)a0;

- (BOOL)hasChanges;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAttachment:(id)a0;
- (void)drawingDataDidChange:(id)a0;
- (void)processIndexableContentWithCompletion:(id /* block */)a0;
- (void)updateNowIfNecessary;
- (void)mergeDrawingChanges;
- (id)retrieveAndClearLatestDrawingToMerge;
- (void)mergeDrawingWithDrawing:(id)a0;
- (void)updateVersionIfNeededForAttachment:(id)a0 withDrawing:(id)a1;

@end
