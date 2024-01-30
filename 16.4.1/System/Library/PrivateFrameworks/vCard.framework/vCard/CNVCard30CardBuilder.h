@class NSMutableArray;
@protocol CNVCardPerson, CNVCardLineFactory;

@interface CNVCard30CardBuilder : NSObject

@property (readonly, nonatomic) id<CNVCardPerson> person;
@property (readonly, nonatomic) NSMutableArray *lines;
@property (nonatomic) long long groupCount;
@property (nonatomic) unsigned long long countOfLinesBeforePhoto;
@property (readonly, copy, nonatomic) id /* block */ retrofitPhoto;
@property (nonatomic) BOOL photoHandled;
@property (readonly, nonatomic) NSMutableArray *unknownProperties;
@property (readonly, nonatomic) id<CNVCardLineFactory> lineFactory;

+ (id)builderWithPerson:(id)a0;
+ (unsigned long long)estimatedBytesAvailableForPhotoWithOptions:(id)a0 serializer:(id)a1;

- (void).cxx_destruct;
- (id)initWithPerson:(id)a0;
- (void)addCalendarURIs;
- (void)addOrganization;
- (void)addRelatedNames;
- (void)removeUnknownPropertiesWithTag:(id)a0;
- (void)addNote;
- (void)addPhoneNumbers;
- (void)addURLs;
- (void)_addAttributesForCropRects:(id)a0 imageHash:(id)a1 toLine:(id)a2;
- (void)addActivityAlerts;
- (void)addAlternateBirthday;
- (void)addBeginningOfCard;
- (void)addBirthday;
- (void)addCardDAVUID;
- (void)addCategories;
- (void)addCompanyMarker;
- (void)addDowntimeWhitelist;
- (void)addEmailAddresses;
- (void)addEndOfCard;
- (void)addFullName;
- (void)addImageHash;
- (void)addImageType;
- (void)addInstantMessagingHandles:(id)a0;
- (void)addInstantMessagingInfo;
- (void)addLegacyInstantMessagingHandles:(id)a0 forService:(id)a1 vCardProperty:(id)a2;
- (void)addLineWithName:(id)a0 value:(id)a1;
- (void)addNameComponents;
- (void)addNameLines;
- (void)addNameOrderMarker;
- (void)addOtherDates;
- (void)addPhonemeData;
- (BOOL)addPhotoReferences;
- (void)addPhotoWithOptions:(id)a0;
- (void)addPostalAddresses;
- (void)addPreferredApplePersonaIdentifier;
- (void)addPreferredLikenessSource;
- (void)addPropertyLinesForValues:(id)a0 generator:(id)a1;
- (void)addSocialProfiles;
- (void)addUID;
- (void)addUnknownProperties;
- (void)buildWithSerializer:(id)a0;
- (void)preparePhotoLineWithOptions:(id)a0;

@end
