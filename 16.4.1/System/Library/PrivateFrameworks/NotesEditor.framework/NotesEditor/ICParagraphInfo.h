@class TTParagraphStyle, NSMutableArray;

@interface ICParagraphInfo : NSObject

@property (retain, nonatomic) TTParagraphStyle *paragraphStyle;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } characterRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeIncludingChildren;
@property (retain, nonatomic) NSMutableArray *children;
@property (readonly, nonatomic) unsigned int style;
@property (readonly, nonatomic) unsigned long long indent;
@property (readonly, nonatomic) unsigned long long blockQuoteLevel;

- (void).cxx_destruct;

@end
