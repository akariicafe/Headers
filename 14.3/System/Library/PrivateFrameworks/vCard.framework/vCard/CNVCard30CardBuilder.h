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
- (void)addUID;
- (void)addBeginningOfCard;
- (void)addNameLines;
- (void)addEmailAddresses;
- (void)addPhoneNumbers;
- (void)addPostalAddresses;
- (void)addSocialProfiles;
- (void)addActivityAlerts;
- (void)addNote;
- (void)addURLs;
- (void)addCalendarURIs;
- (void)addBirthday;
- (void)addAlternateBirthday;
- (void)addInstantMessagingInfo;
- (void)addPhotoWithOptions:(id)a0;
- (void)addOtherDates;
- (void)addRelatedNames;
- (void)addNameOrderMarker;
- (void)addCompanyMarker;
- (void)addCategories;
- (void)addCardDAVUID;
- (void)addPhonemeData;
- (void)addDowntimeWhitelist;
- (void)addPreferredLikenessSource;
- (void)addPreferredApplePersonaIdentifier;
- (void)addUnknownProperties;
- (void)addEndOfCard;
- (void)buildWithSerializer:(id)a0;
- (void)addLineWithName:(id)a0 value:(id)a1;
- (void)addNameComponents;
- (void)addFullName;
- (void)addOrganization;
- (void)addPropertyLinesForValues:(id)a0 generator:(id)a1;
- (void)removeUnknownPropertiesWithTag:(id)a0;
- (void)addLegacyInstantMessagingHandles:(id)a0 forService:(id)a1 vCardProperty:(id)a2;
- (void)addInstantMessagingHandles:(id)a0;
- (BOOL)addPhotoReferences;
- (void)preparePhotoLineWithOptions:(id)a0;
- (void)_addAttributesForCropRects:(id)a0 imageHash:(id)a1 toLine:(id)a2;
- (void)addImageType;
- (void)addImageHash;

@end
