@class NSString, NSData, NSDate, ICTextViewScrollState;

@interface ICNoteUserActivityState : ICNoteBaseUserActivityState

@property (copy, nonatomic) NSString *noteID;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) BOOL wantsContinuationStreams;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSData *contentHash;
@property (copy, nonatomic) NSString *folderID;
@property (copy, nonatomic) NSString *folderName;
@property (retain, nonatomic) ICTextViewScrollState *scrollState;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } visibleRange;
@property (copy, nonatomic) NSData *visibleRangeData;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectionRange;
@property (copy, nonatomic) NSData *selectionRangeData;

- (void).cxx_destruct;
- (id)initWithNote:(id)a0;
- (void)updateUserActivity:(id)a0;

@end
