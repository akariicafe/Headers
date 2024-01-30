@class NSData, NSString, NSArray, SFImage, NSURL, NSDictionary, SFLatLng, SFPunchout;

@interface SFActionItem : NSObject <SFActionItem, NSSecureCoding, NSCopying> {
    struct { unsigned char isOverlay : 1; unsigned char requiresLocalMedia : 1; unsigned char latitude : 1; unsigned char longitude : 1; unsigned char isITunes : 1; unsigned char mediaEntityType : 1; unsigned char shouldSearchDirectionsAlongCurrentRoute : 1; unsigned char directionsMode : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *labelForLocalMedia;
@property (nonatomic) BOOL isOverlay;
@property (copy, nonatomic) NSArray *storeIdentifiers;
@property (nonatomic) BOOL requiresLocalMedia;
@property (copy, nonatomic) NSString *localMediaIdentifier;
@property (retain, nonatomic) SFPunchout *punchout;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSData *mapsData;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (copy, nonatomic) NSString *provider;
@property (copy, nonatomic) NSString *offerType;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *labelITunes;
@property (nonatomic) BOOL isITunes;
@property (retain, nonatomic) SFImage *icon;
@property (retain, nonatomic) SFImage *baseIcon;
@property (retain, nonatomic) SFLatLng *location;
@property (copy, nonatomic) NSString *messageIdentifier;
@property (copy, nonatomic) NSURL *messageURL;
@property (copy, nonatomic) NSString *persistentID;
@property (nonatomic) int mediaEntityType;
@property (copy, nonatomic) NSString *universalLibraryID;
@property (copy, nonatomic) NSString *interactionContentType;
@property (retain, nonatomic) SFPunchout *customDirectionsPunchout;
@property (nonatomic) BOOL shouldSearchDirectionsAlongCurrentRoute;
@property (nonatomic) int directionsMode;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)hasLatitude;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasLongitude;
- (BOOL)hasShouldSearchDirectionsAlongCurrentRoute;
- (BOOL)hasIsOverlay;
- (BOOL)hasRequiresLocalMedia;
- (BOOL)hasIsITunes;
- (BOOL)hasMediaEntityType;
- (BOOL)hasDirectionsMode;

@end
