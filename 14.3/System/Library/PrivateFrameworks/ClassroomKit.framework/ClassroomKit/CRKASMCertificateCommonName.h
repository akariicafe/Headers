@class NSString, NSUUID;

@interface CRKASMCertificateCommonName : NSObject

@property (readonly, copy, nonatomic) NSString *prefix;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly, copy, nonatomic) NSString *stringValue;

+ (id)commonNameWithString:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPrefix:(id)a0 userIdentifier:(id)a1;
- (id)initWithPrefix:(id)a0 userIdentifier:(id)a1 UUID:(id)a2;

@end
