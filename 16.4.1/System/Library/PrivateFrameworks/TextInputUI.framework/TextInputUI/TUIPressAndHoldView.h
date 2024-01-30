@class NSArray, NSString, TUIPressAndHoldGrid, NSIndexPath;
@protocol TUIPressAndHoldViewDelegate;

@interface TUIPressAndHoldView : UIView <TUIPressAndHoldGridDelegate>

@property (retain, nonatomic) TUIPressAndHoldGrid *pressAndHoldGrid;
@property (readonly, nonatomic) NSArray *accentVariants;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (readonly, nonatomic) NSString *selectedAccentVariant;
@property (weak, nonatomic) id<TUIPressAndHoldViewDelegate> delegate;
@property (readonly, nonatomic) NSString *currentKeyString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accentedCharactersForKeyString:(id)a0;
+ (struct CGSize { double x0; double x1; })requiredPopoverSizeForKeyString:(id)a0;

- (BOOL)handleNumberKey:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)handleSelection;
- (BOOL)hasAccentVariantInForwardDirection:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyString:(id)a1;
- (BOOL)pressAndHoldGridHasSelectedIndexPath;
- (void)showAccentVariantInForwardDirection:(BOOL)a0;
- (void)pressAndHoldGridDidAcceptAccentVariant:(id)a0 atIndexPath:(id)a1;

@end
