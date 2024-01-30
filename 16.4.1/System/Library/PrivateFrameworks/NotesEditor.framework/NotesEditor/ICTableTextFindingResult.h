@class NSNumber, NSString, NSAttributedString, ICAttachment;

@interface ICTableTextFindingResult : ICTextFindingResult

@property (weak, nonatomic) ICAttachment *attachment;
@property (retain, nonatomic) NSAttributedString *findableString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeInFindableString;
@property (retain, nonatomic) NSString *queryString;
@property (retain, nonatomic) NSNumber *rowNumber;
@property (retain, nonatomic) NSNumber *columnNumber;
@property (retain, nonatomic) NSNumber *cellStartRangeLocation;
@property (nonatomic) BOOL ignoreCase;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)framesForHighlightInTextView:(id)a0;
- (id)tableAttachmentViewControllerForTextView:(id)a0;
- (id)viewForHighlightsInTextView:(id)a0;

@end
