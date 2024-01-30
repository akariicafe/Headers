@class NSString, NSArray, SAPerson, SAVoice, NSNumber;

@interface SAHomeMemberSettings : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *countryCode;
@property (retain, nonatomic) SAPerson *meCard;
@property (nonatomic) BOOL mediaPlayerExplicitContentDisallowed;
@property (copy, nonatomic) NSArray *parentalRestrictions;
@property (copy, nonatomic) NSString *preferredLanguage;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *temperatureUnit;
@property (retain, nonatomic) SAVoice *ttsVoice;
@property (copy, nonatomic) NSNumber *twentyFourHourTimeDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homeMemberSettings;
+ (id)homeMemberSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
