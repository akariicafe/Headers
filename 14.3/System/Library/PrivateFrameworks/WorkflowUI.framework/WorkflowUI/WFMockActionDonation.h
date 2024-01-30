@class NSString, INShortcut, NSData, NSDate;

@interface WFMockActionDonation : NSObject <VCActionDonation>

@property (readonly, copy, nonatomic) NSData *actionData;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifierForDisplay;
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifierForLaunching;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *fullDescription;
@property (readonly, copy, nonatomic) NSString *suggestedPhrase;
@property (readonly, nonatomic) id uniqueProperty;
@property (readonly, nonatomic) INShortcut *shortcut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2 actionData:(id)a3;

@end
