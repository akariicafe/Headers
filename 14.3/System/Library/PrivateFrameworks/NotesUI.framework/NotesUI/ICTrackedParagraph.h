@class TTParagraphStyle;

@interface ICTrackedParagraph : NSObject

@property (retain, nonatomic) TTParagraphStyle *paragraph;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } characterRange;

- (void).cxx_destruct;
- (id)description;

@end
