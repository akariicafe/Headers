@class NSString;

@interface PKPaymentSetupFieldLabel : PKPaymentSetupField

@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *detailTitle;
@property (copy, nonatomic) NSString *detailSubtitle;
@property (copy, nonatomic) NSString *detailBody;
@property (copy, nonatomic) NSString *businessChatButtonTitle;
@property (copy, nonatomic) NSString *businessChatIdentifier;
@property (copy, nonatomic) NSString *businessChatIntentName;
@property (nonatomic) unsigned long long alingment;
@property (readonly, copy, nonatomic) NSString *title;

- (void)updateWithAttribute:(id)a0;
- (void)setCurrentValue:(id)a0;
- (id)submissionString;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)_commonUpdate;
- (id)displayString;
- (void)updateWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)fieldType;

@end
