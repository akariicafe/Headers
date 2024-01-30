@class NSUUID, NSArray, NSString, NSDate, NSDictionary;

@interface _PSPredictionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *suggestionDate;
@property (copy, nonatomic) NSUUID *locationUUID;
@property (copy, nonatomic) NSArray *locationUUIDs;
@property (nonatomic) long long locationType;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSArray *seedRecipients;
@property (copy, nonatomic) NSArray *candidateShareExtensionBundleIds;
@property (copy, nonatomic) NSDictionary *appBundleIdsToShareExtensionBundleIdsMapping;
@property (retain, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSArray *photoSuggestedPeople;
@property (nonatomic) BOOL showPotentialFamilyMembers;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
