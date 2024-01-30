@class NSString, NSNumber;

@interface PlaySportsMediaIntent : INIntent

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *sportName;
@property (nonatomic, copy) NSString *leagueName;
@property (nonatomic, copy) NSString *teamName;
@property (nonatomic, copy) NSString *athleteName;
@property (nonatomic, copy) NSString *sportsMediaType;
@property (nonatomic, copy) NSString *punchoutBundleId;
@property (nonatomic, copy) NSString *punchoutUri;
@property (nonatomic, copy) NSString *punchoutAppDisplayName;
@property (nonatomic, retain) NSNumber *punchoutLaunchOverSiri;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
