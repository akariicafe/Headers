@class NSString, DDSAssetPolicy;

@interface DDSAssertDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *assertionIdentifier;
@property (retain, nonatomic) DDSAssetPolicy *policy;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToDescriptor:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPolicy:(id)a0 assertionID:(id)a1 clientID:(id)a2;
- (id)dumpDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
