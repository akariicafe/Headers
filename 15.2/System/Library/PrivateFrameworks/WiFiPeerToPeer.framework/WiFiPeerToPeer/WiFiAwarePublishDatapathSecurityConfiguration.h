@class NSArray, NSData;

@interface WiFiAwarePublishDatapathSecurityConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *pmkList;
@property (readonly, nonatomic) NSArray *passphraseList;
@property (readonly, nonatomic) NSData *pmkID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPMK:(id)a0 andPMKID:(id)a1;
- (id)initWithPMKList:(id)a0 passphraseList:(id)a1;

@end
