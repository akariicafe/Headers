@class NSError, NSString, NSURL, APTapAction, APFrequencyCapData, NSUUID, NSDictionary, APOdmlServerResponse, NSArray, APPolicyData;

@interface APRepresentationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *contentDataIdentifier;
@property long long placementType;
@property (retain) NSString *rawAdType;
@property (retain) NSString *rawAdFormatType;
@property long long desiredPosition;
@property (retain) APPolicyData *policyData;
@property (retain) APFrequencyCapData *frequencyCapData;
@property unsigned long long privacyMarkerPosition;
@property struct { double width; double height; } size;
@property (retain) APTapAction *tapAction;
@property (retain) NSString *adTag;
@property (retain) NSURL *videoURL;
@property double duration;
@property double skipThreshold;
@property BOOL skipEnabled;
@property BOOL unbranded;
@property double bitrate;
@property unsigned long long signalStrength;
@property long long connectionType;
@property (retain) NSString *articleID;
@property (retain) NSString *articleTitle;
@property (retain) NSString *advertiserName;
@property (retain) NSString *campaignData;
@property (retain) NSError *error;
@property (retain) NSString *adamID;
@property (retain) NSString *metadata;
@property (retain) NSString *journeyRelayAdGroupId;
@property (retain) NSString *journeyRelayCampaignId;
@property BOOL parentAppCheckEnabled;
@property (retain) NSDictionary *installAttribution;
@property long long rank;
@property long long timeToDisplay;
@property (retain) NSUUID *iAdID;
@property (retain) NSUUID *impressionID;
@property (retain) NSString *clientRequestID;
@property (retain) NSString *storeFront;
@property (retain) NSString *storeFrontLocale;
@property (retain) APOdmlServerResponse *odmlResponse;
@property BOOL odmlSuccess;
@property (retain) NSString *treatmentId;
@property (retain) NSString *deploymentId;
@property (retain) NSString *experimentId;
@property (retain, nonatomic) NSDictionary *positionInformation;
@property (nonatomic) long long slotNumber;
@property (retain, nonatomic) NSArray *cppIds;
@property (retain, nonatomic) NSDictionary *appMetadata;
@property (readonly) NSUUID *identifier;
@property (readonly) NSString *targetingExpressionId;

+ (id)mockRepresentationWithType:(long long)a0 contentData:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_correctNonNullableFields;

@end
