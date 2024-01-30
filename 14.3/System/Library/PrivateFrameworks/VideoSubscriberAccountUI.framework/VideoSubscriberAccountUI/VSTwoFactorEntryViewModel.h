@class VSTwoFactorEntryTextField, NSString, NSArray, VSExpressionEvaluator;
@protocol VSTwoFactorEntryViewModelDelegate;

@interface VSTwoFactorEntryViewModel : VSCuratedViewModel

@property (copy, nonatomic) NSString *originalTwoFacorCode;
@property (retain, nonatomic) VSExpressionEvaluator *buttonExpressionEvaluator;
@property (weak, nonatomic) id<VSTwoFactorEntryViewModelDelegate> delegate;
@property (retain, nonatomic) VSTwoFactorEntryTextField *twoFactorTextField;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSArray *buttons;

- (id)init;
- (void).cxx_destruct;
- (void)configureWithRequest:(id)a0;
- (void)buttonAtIndexWasPressed:(unsigned long long)a0;

@end
