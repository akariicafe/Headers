@class NSString, NSArray;

@interface FAPropertyEligibilityRequirements : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) BOOL hasRecommendedMembers;
@property (readonly, copy, nonatomic) NSString *expectedMediaAltDSID;
@property (readonly, nonatomic) BOOL serverEligibility;
@property (readonly, copy, nonatomic) NSArray *activeBundleIDs;
@property (readonly, nonatomic) id serverPayload;

- (void).cxx_destruct;
- (id)initWithPropertyName:(id)a0 dictionaryRepresentation:(id)a1;
- (id)initWithPropertyName:(id)a0 hasRecommendedMembers:(BOOL)a1 expectedMediaAltDSID:(id)a2 serverEligibility:(BOOL)a3 activeBundleIDs:(id)a4 serverPayload:(id)a5;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
