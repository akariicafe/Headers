@class NSString, NSArray, NSURL, NSData, NSDictionary;

@interface RadioManagedStation : NSManagedObject

@property (nonatomic) long long stationID;
@property (copy, nonatomic) NSString *stationHash;
@property (copy, nonatomic) NSString *stationStringID;
@property (nonatomic) long long persistentID;
@property (nonatomic) long long adamID;
@property (nonatomic) int sortOrder;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *stationDescription;
@property (copy, nonatomic) NSString *coreSeedName;
@property (copy, nonatomic) NSURL *artworkURL;
@property (copy, nonatomic) NSData *artworkURLData;
@property (retain, nonatomic) NSArray *seedTracks;
@property (nonatomic) long long songMixType;
@property (nonatomic) BOOL editEnabled;
@property (retain, nonatomic) NSArray *editableFields;
@property (nonatomic) BOOL hasSkipRules;
@property (nonatomic) BOOL isExplicit;
@property (nonatomic) BOOL likesEnabled;
@property (nonatomic) BOOL skipEnabled;
@property (nonatomic) int skipFrequency;
@property (copy, nonatomic) NSString *skipIdentifier;
@property (nonatomic) double skipInterval;
@property (copy, nonatomic) NSArray *skipTimestamps;
@property (nonatomic) BOOL virtualPlayEnabled;
@property (nonatomic, getter=isFeatured) BOOL featured;
@property (nonatomic, getter=isGatewayVideoAdEnabled) BOOL gatewayVideoAdEnabled;
@property (nonatomic, getter=isSponsored) BOOL sponsored;
@property (retain, nonatomic) NSData *adData;
@property (nonatomic) unsigned long long impressionThreshold;
@property (nonatomic, getter=isPremiumPlacement) BOOL premiumPlacement;
@property (nonatomic, getter=isPreviewOnly) BOOL previewOnly;
@property (nonatomic) BOOL requiresSubscription;
@property (nonatomic, getter=isShared) BOOL shared;
@property (nonatomic, getter=isSharingEnabled) BOOL sharingEnabled;
@property (nonatomic, getter=isSubscribed) BOOL subscribed;
@property (nonatomic) int subscriberCount;
@property (copy, nonatomic) NSString *shareToken;
@property (copy, nonatomic) NSDictionary *debugDictionary;
@property (retain, nonatomic) NSURL *streamURL;
@property (readonly, nonatomic, getter=isPreview) BOOL preview;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)defaultPropertiesToFetch;

- (id)feedbackDictionaryRepresentation;
- (id)additionalReferencedTrackDescriptors;
- (void)setStreamCertificateURL:(id)a0;
- (void)setStreamKeyURL:(id)a0;
- (id)streamCertificateURL;
- (id)streamKeyURL;

@end
