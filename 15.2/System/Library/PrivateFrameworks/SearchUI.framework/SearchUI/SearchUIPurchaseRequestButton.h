@class TLKStackView, TLKStoreButton, TLKImageView, SFShowPurchaseRequestSheetCommand;
@protocol NSObject;

@interface SearchUIPurchaseRequestButton : SearchUIAccessoryViewController

@property (retain, nonatomic) TLKStoreButton *appStoreButton;
@property (retain, nonatomic) TLKImageView *imageView;
@property (retain, nonatomic) TLKStackView *stackView;
@property (retain, nonatomic) SFShowPurchaseRequestSheetCommand *command;
@property (retain, nonatomic) id<NSObject> purchaseRequestStatusObserver;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (id)setupView;
- (void).cxx_destruct;
- (void)setupSubscription;
- (unsigned long long)type;
- (void)dealloc;
- (void)buttonPressed;
- (void)updateButtonState;
- (id)imageWithSymbolName:(id)a0 accessibilityDescription:(id)a1;
- (void)updateWithStatus:(int)a0 forRequestID:(id)a1;

@end
