@class NSArray, VSCredentialEntryPicker, NSURL, VSExpressionEvaluator, NSString;
@protocol VSCredentialEntryViewModelDelegate;

@interface VSCredentialEntryViewModel : VSCuratedViewModel

@property (retain, nonatomic) VSExpressionEvaluator *buttonExpressionEvaluator;
@property (retain, nonatomic) NSArray *credentialEntryFields;
@property (retain, nonatomic) VSCredentialEntryPicker *picker;
@property (copy, nonatomic) NSURL *linkURL;
@property (copy, nonatomic) NSString *linkTitle;
@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) NSString *recentsTitle;
@property (copy, nonatomic) NSString *recentsMessage;
@property (copy, nonatomic) NSString *additionalMessage;
@property (weak, nonatomic) id<VSCredentialEntryViewModelDelegate> delegate;

- (void).cxx_destruct;
- (void)_bindField:(id)a0;
- (void)_unbindField:(id)a0;
- (void)buttonTappedAtIndex:(unsigned long long)a0;
- (void)clearFieldsAfterUsername;
- (void)configureWithRequest:(id)a0;
- (void)pickerDidSelectRow:(unsigned long long)a0;
- (void)validateCredentialEntryFields;

@end
