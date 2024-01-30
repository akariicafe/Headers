@class TSWPText, TSCHTSWPTextDelegate;

@interface TSCHTSWPTextWithDelegate : NSObject

@property (retain, nonatomic) TSWPText *text;
@property (retain, nonatomic) TSCHTSWPTextDelegate *textDelegate;

- (void).cxx_destruct;
- (id)initWithText:(id)a0 textDelegate:(id)a1;

@end
