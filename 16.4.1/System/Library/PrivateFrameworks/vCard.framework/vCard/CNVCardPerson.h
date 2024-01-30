@class NSString, NSArray, NSDictionary, NSData, NSDateComponents;

@interface CNVCardPerson : NSObject <CNVCardPerson>

@property (retain) NSString *firstName;
@property (retain) NSString *lastName;
@property (retain) NSString *middleName;
@property (retain) NSString *title;
@property (retain) NSString *suffix;
@property (retain) NSString *nickname;
@property (retain) NSString *maidenName;
@property (retain) NSString *phoneticFirstName;
@property (retain) NSString *phoneticMiddleName;
@property (retain) NSString *phoneticLastName;
@property (retain) NSString *pronunciationFirstName;
@property (retain) NSString *pronunciationLastName;
@property (retain) NSString *organization;
@property (retain) NSString *phoneticOrganization;
@property (retain) NSString *department;
@property (retain) NSString *jobTitle;
@property BOOL isMe;
@property BOOL isCompany;
@property int nameOrder;
@property (retain) NSArray *emailAddresses;
@property (retain) NSArray *phoneNumbers;
@property (retain) NSArray *postalAddresses;
@property (retain) NSArray *socialProfiles;
@property (retain) NSArray *instantMessagingAddresses;
@property (retain) NSArray *urls;
@property (retain) NSArray *calendarURIs;
@property (retain) NSDictionary *activityAlerts;
@property (retain) NSArray *imageReferences;
@property (retain) NSDictionary *imageCropRects;
@property (retain) NSDictionary *largeImageCropRects;
@property (retain) NSData *largeImageData;
@property (retain) NSData *imageData;
@property (retain) NSString *imageType;
@property (retain) NSData *imageHash;
@property (retain) NSData *memojiMetadata;
@property (retain) NSDateComponents *birthdayComponents;
@property (retain) NSDateComponents *alternateBirthdayComponents;
@property (retain) NSArray *otherDateComponents;
@property (retain) NSArray *relatedNames;
@property (retain) NSString *note;
@property (retain) NSString *phonemeData;
@property (retain) NSArray *namesOfParentGroups;
@property (retain) NSString *cardDAVUID;
@property (retain) NSString *uid;
@property (retain) NSString *preferredLikenessSource;
@property (retain) NSString *preferredApplePersonaIdentifier;
@property int downtimeWhitelistAuthorization;
@property (retain) NSArray *unknownProperties;
@property (readonly) NSString *companyName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)largeImageHashOfType:(id)a0;

@end
