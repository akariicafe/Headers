@class NSString, NSArray, NSDictionary, NSURL;

@interface ADAdImpressionPublicAttributes : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL unbranded;
@property (copy, nonatomic) NSString *batchResponseIdentifier;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (nonatomic) double skipThreshold;
@property (nonatomic) double minimumIntervalBetweenPresentations;
@property (retain, nonatomic) NSArray *videoAssets;
@property (retain, nonatomic) NSDictionary *mediaAsset;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSArray *adSpecCreativeSizes;
@property (nonatomic) BOOL hasAction;
@property (retain, nonatomic) NSURL *audioURL;
@property (retain, nonatomic) NSURL *staticImageURL;
@property (retain, nonatomic) NSURL *logoImageURL;
@property (copy, nonatomic) NSString *headlineForLCD;
@property (copy, nonatomic) NSString *descriptionForLCD;
@property (retain, nonatomic) NSArray *nativeMetadata;
@property (retain, nonatomic) NSDictionary *transparencyDetails;
@property (retain, nonatomic) NSDictionary *nativeMediaCreativeMetadata;
@property (nonatomic) double portraitWidth;
@property (nonatomic) double portraitHeight;
@property (nonatomic) double landscapeWidth;
@property (nonatomic) double landscapeHeight;
@property (retain, nonatomic) NSURL *contentURL;
@property (retain, nonatomic) NSString *contentString;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (nonatomic) BOOL requiresMRAID;
@property (nonatomic) long long maximumPretapRequestCount;
@property (nonatomic) BOOL adLibManagedVideo;
@property (retain, nonatomic) NSArray *matchClauses;
@property (retain, nonatomic) NSArray *excludeTags;
@property (nonatomic) long long adPrivacyMarkPosition;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
