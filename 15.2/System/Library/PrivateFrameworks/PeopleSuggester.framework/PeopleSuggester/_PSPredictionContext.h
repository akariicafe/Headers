@class NSString, NSUUID, NSArray, NSDate, NSDictionary;

@interface _PSPredictionContext : NSObject <NSSecureCoding, ATXSuggestionExecutableProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *searchPrefix;
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
@property long long suggestionPurpose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)totalHashOfElementsFromArray:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
