@class NSString, ICNote, TTMergeableStringSelection, NSDate, NSDictionary;

@interface ICTextViewScrollState : NSObject

@property (retain, nonatomic) TTMergeableStringSelection *topLeftStringSelection;
@property (nonatomic) double topLeftTextAttachmentScrollHeightOffsetRatio;
@property (weak, nonatomic) ICNote *note;
@property (copy, nonatomic) NSString *noteIdentifier;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, getter=isFromArchive) BOOL fromArchive;
@property (nonatomic) BOOL loadingFromDictionaryFailed;
@property (nonatomic) unsigned long long topLeftCharIndexAtCapture;
@property (readonly, nonatomic) unsigned long long topLeftTextCharacterIndex;
@property (readonly, nonatomic) BOOL captureIsWithinTimeThreshold;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) double timeIntervalSinceCapture;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)scrollStateForAttachment:(id)a0 inNote:(id)a1;
+ (id)scrollStateForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inNote:(id)a1;
+ (id)scrollStateForTextView:(id)a0;

- (void).cxx_destruct;
- (BOOL)applyToTextView:(id)a0;
- (id)initWithDictionary:(id)a0 note:(id)a1;

@end
