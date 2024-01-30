@class NSString, UIPrinterAccessoryView, UIGestureRecognizer, PKPrinter;

@interface UIPrinterTableViewCell : UITableViewCell <UIPrinterAccessoryViewDelegate>

@property (nonatomic) int printerState;
@property (weak, nonatomic) PKPrinter *printer;
@property (weak, nonatomic) id delegate;
@property (nonatomic) BOOL checked;
@property (retain, nonatomic) UIPrinterAccessoryView *printerAccessoryView;
@property (retain, nonatomic) UIGestureRecognizer *expandedAccessoryTapRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)printerAccessoryViewInfoButtonPressed:(id)a0;
- (void)expandedAccessoryAreaTapped;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
