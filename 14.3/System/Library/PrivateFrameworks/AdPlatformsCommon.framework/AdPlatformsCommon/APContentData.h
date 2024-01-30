@class NSDate, NSString, NSUUID, NSDictionary, NSURL, NSMutableSet, NSError;

@interface APContentData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifier;
@property (retain) NSUUID *contextIdentifier;
@property (retain) NSString *uniqueIdentifier;
@property (retain) NSString *journeyIdentifier;
@property (retain) NSDictionary *metadata;
@property (retain) NSURL *disclosureURL;
@property (retain) NSString *disclosureRendererPayload;
@property unsigned long long minimumTimeBetweenPresentation;
@property (retain) NSMutableSet *representations;
@property (retain) NSString *brandName;
@property (retain) NSString *campaignText;
@property (retain) NSError *error;
@property (retain) NSDate *expirationDate;
@property long long serverUnfilledReason;
@property (retain) NSString *humanReadableName;

+ (id)mockDataFromContext:(id)a0 types:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)addRepresentation:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)removeRepresentation:(id)a0;
- (id)getRepresentation;
- (id)representationWithIdentifier:(id)a0;

@end
