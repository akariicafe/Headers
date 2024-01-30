@class NSString, INInteraction, INShortcut, NSDate;

@interface VCInteractionDonation : NSObject <VCActionDonation>

@property (readonly, nonatomic) INInteraction *interaction;
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

+ (void)initialize;
+ (id)timestampDateFormatter;

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 sourceAppIdentifier:(id)a1 interaction:(id)a2;

@end
