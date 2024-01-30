@class NSDictionary, NSString;

@interface FAFamilyCloudKitProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *participantID;
@property (readonly, copy, nonatomic) NSString *shareID;
@property (readonly, copy, nonatomic) NSString *zoneID;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
