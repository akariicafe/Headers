@class NSDate, NSString, NSUUID, NSURL, NSError, APInstallAttribution, NSDictionary, NSMutableSet;

@interface APContentData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifier;
@property (retain) NSUUID *contextIdentifier;
@property (retain) NSString *uniqueIdentifier;
@property (retain) NSString *journeyIdentifier;
@property (retain) NSDictionary *metadata;
@property (retain) NSURL *disclosureURL;
@property (retain) NSString *disclosureRendererPayload;
@property double impressionThreshold;
@property unsigned long long minimumTimeBetweenPresentation;
@property (retain) NSMutableSet *representations;
@property (retain) NSString *brandName;
@property (retain) NSString *campaignText;
@property (retain) NSError *error;
@property (retain) NSDate *expirationDate;
@property long long serverUnfilledReason;
@property (retain) NSString *humanReadableName;
@property (retain) APInstallAttribution *installAttribution;

+ (id)mockDataFromContext:(id)a0 types:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void)addRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_correctNonNullableFields;
- (void)addRepresentations:(id)a0;
- (void)removeRepresentation:(id)a0;
- (id)getRepresentation;
- (id)representationWithIdentifier:(id)a0;

@end
