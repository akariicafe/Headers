@class _SFPBLatLng, NSString, NSArray, NSData, _SFPBPunchout, _SFPBImage, _SFPBGraphicalFloat, _SFPBURL;

@interface _SFPBActionItem : PBCodable <_SFPBActionItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *labelForLocalMedia;
@property (nonatomic) BOOL isOverlay;
@property (copy, nonatomic) NSArray *storeIdentifiers;
@property (nonatomic) BOOL requiresLocalMedia;
@property (copy, nonatomic) NSString *localMediaIdentifier;
@property (retain, nonatomic) _SFPBPunchout *punchout;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSData *mapsData;
@property (retain, nonatomic) _SFPBGraphicalFloat *latitude;
@property (retain, nonatomic) _SFPBGraphicalFloat *longitude;
@property (copy, nonatomic) NSString *provider;
@property (copy, nonatomic) NSString *offerType;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *labelITunes;
@property (nonatomic) BOOL isITunes;
@property (retain, nonatomic) _SFPBImage *icon;
@property (retain, nonatomic) _SFPBImage *baseIcon;
@property (retain, nonatomic) _SFPBLatLng *location;
@property (copy, nonatomic) NSString *messageIdentifier;
@property (retain, nonatomic) _SFPBURL *messageURL;
@property (copy, nonatomic) NSString *persistentID;
@property (nonatomic) int mediaEntityType;
@property (copy, nonatomic) NSString *universalLibraryID;
@property (copy, nonatomic) NSString *interactionContentType;
@property (retain, nonatomic) _SFPBPunchout *customDirectionsPunchout;
@property (nonatomic) BOOL shouldSearchDirectionsAlongCurrentRoute;
@property (nonatomic) int directionsMode;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)addStoreIdentifiers:(id)a0;
- (void)clearStoreIdentifiers;
- (unsigned long long)storeIdentifiersCount;
- (id)storeIdentifiersAtIndex:(unsigned long long)a0;

@end
