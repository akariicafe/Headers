@class UITapGestureRecognizer, NSUUID, NSString;
@protocol CPSButtonDelegate;

@interface CPSButton : UIButton <CPSControl>

@property (retain, nonatomic) UITapGestureRecognizer *pressTapRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *touchTapRecognizer;
@property (retain, nonatomic) NSUUID *identifier;
@property (weak, nonatomic) id<CPSButtonDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithType:(long long)a0;

- (void)_addGestureRecognizers;
- (void)_buttonPressed:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_buttonTapped:(id)a0;
- (void)didMoveToWindow;
- (void)buttonSelected:(id)a0 interactionModel:(unsigned long long)a1;

@end
