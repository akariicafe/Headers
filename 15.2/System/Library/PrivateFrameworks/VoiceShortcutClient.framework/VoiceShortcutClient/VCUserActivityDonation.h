@class NSString, NSUserActivity, INShortcut, NSDate;

@interface VCUserActivityDonation : NSObject <VCActionDonation>

@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSUserActivity *userActivity;
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

+ (id)timestampDateFormatter;

- (id)initWithEvent:(id)a0;
- (id)dateString;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithUserActivity:(id)a0 identifier:(id)a1 sourceAppIdentifier:(id)a2 date:(id)a3;

@end
