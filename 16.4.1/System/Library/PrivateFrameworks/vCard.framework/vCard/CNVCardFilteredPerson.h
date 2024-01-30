@class NSString, NSArray, CNVCardFilteredPersonScope, NSDictionary, NSData, NSDateComponents;
@protocol CNVCardPerson;

@interface CNVCardFilteredPerson : NSObject <CNVCardPerson>

@property (readonly, nonatomic) id<CNVCardPerson> person;
@property (readonly, nonatomic) CNVCardFilteredPersonScope *scope;
@property (readonly) NSString *firstName;
@property (readonly) NSString *lastName;
@property (readonly) NSString *middleName;
@property (readonly) NSString *title;
@property (readonly) NSString *suffix;
@property (readonly) NSString *nickname;
@property (readonly) NSString *maidenName;
@property (readonly) NSString *phoneticFirstName;
@property (readonly) NSString *phoneticMiddleName;
@property (readonly) NSString *phoneticLastName;
@property (readonly) NSString *pronunciationFirstName;
@property (readonly) NSString *pronunciationLastName;
@property (readonly) NSString *organization;
@property (readonly) NSString *phoneticOrganization;
@property (readonly) NSString *department;
@property (readonly) NSString *jobTitle;
@property (readonly) BOOL isMe;
@property (readonly) BOOL isCompany;
@property (readonly) int nameOrder;
@property (readonly) NSArray *emailAddresses;
@property (readonly) NSArray *phoneNumbers;
@property (readonly) NSArray *postalAddresses;
@property (readonly) NSArray *socialProfiles;
@property (readonly) NSArray *instantMessagingAddresses;
@property (readonly) NSArray *urls;
@property (readonly) NSArray *calendarURIs;
@property (readonly) NSDictionary *activityAlerts;
@property (readonly) NSArray *imageReferences;
@property (readonly) NSDictionary *imageCropRects;
@property (readonly) NSDictionary *largeImageCropRects;
@property (readonly) NSData *largeImageData;
@property (readonly) NSData *imageData;
@property (readonly) NSString *imageType;
@property (readonly) NSData *imageHash;
@property (readonly) NSData *memojiMetadata;
@property (readonly) NSDateComponents *birthdayComponents;
@property (readonly) NSDateComponents *alternateBirthdayComponents;
@property (readonly) NSArray *otherDateComponents;
@property (readonly) NSArray *relatedNames;
@property (readonly) NSString *note;
@property (readonly) NSArray *namesOfParentGroups;
@property (readonly) NSString *cardDAVUID;
@property (readonly) NSString *uid;
@property (readonly) NSString *phonemeData;
@property (readonly) int downtimeWhitelistAuthorization;
@property (readonly) NSString *preferredLikenessSource;
@property (readonly) NSString *preferredApplePersonaIdentifier;
@property (readonly) NSArray *unknownProperties;
@property (readonly) NSString *companyName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filteredPersonWithPerson:(id)a0 scope:(id)a1;

@end
