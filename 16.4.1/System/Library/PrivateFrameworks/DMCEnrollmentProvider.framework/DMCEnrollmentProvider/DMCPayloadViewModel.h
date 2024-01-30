@class NSArray, NSString, MDMBook, NSDate;

@interface DMCPayloadViewModel : NSObject

@property (retain, nonatomic) NSArray *typeStrings;
@property (retain, nonatomic) NSString *localizedSingularForm;
@property (retain, nonatomic) NSString *localizedPluralForm;
@property (retain, nonatomic) NSArray *payloadDescriptionKeyValueSections;
@property (retain, nonatomic) NSString *friendlyName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle1Label;
@property (retain, nonatomic) NSString *subtitle1Description;
@property (retain, nonatomic) NSString *subtitle2Label;
@property (retain, nonatomic) NSString *subtitle2Description;
@property (nonatomic) BOOL showIcon;
@property (nonatomic) BOOL hasDetails;
@property (nonatomic) BOOL isCertificate;
@property (nonatomic) BOOL isManagedAppPayload;
@property (nonatomic) BOOL isManagedBookPayload;
@property (retain, nonatomic) NSString *managedAppID;
@property (retain, nonatomic) MDMBook *managedBook;
@property (retain, nonatomic) NSArray *certificateProperties;
@property (retain, nonatomic) NSDate *certificateExpirationDate;
@property (nonatomic) long long type;

+ (id)accountPayloadClasses;
+ (id)managedAppClasses;
+ (id)managedBookClasses;
+ (long long)payloadTypeForPayloadClass:(Class)a0;
+ (id)payloadViewModelsFromPayload:(id)a0;
+ (id)removeDuplicatesFromRestrictionPayloadViewModels:(id)a0;
+ (id)restrictionPayloadClasses;

- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;
- (id)initWithManagedAppID:(id)a0;
- (id)initWithManagedBook:(id)a0;

@end
