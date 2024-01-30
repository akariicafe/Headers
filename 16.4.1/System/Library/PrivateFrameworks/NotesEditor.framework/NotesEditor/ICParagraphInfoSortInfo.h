@class ICTrackedParagraph, NSAttributedString;

@interface ICParagraphInfoSortInfo : NSObject

@property (retain, nonatomic) ICTrackedParagraph *trackedParagraph;
@property (retain, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } characterRange;

- (void).cxx_destruct;

@end
