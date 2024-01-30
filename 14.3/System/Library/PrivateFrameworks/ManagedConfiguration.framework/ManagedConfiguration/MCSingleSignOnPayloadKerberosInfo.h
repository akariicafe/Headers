@class NSString, NSArray;

@interface MCSingleSignOnPayloadKerberosInfo : NSObject

@property (retain, nonatomic) NSString *principalName;
@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSString *certificateUUID;
@property (retain, nonatomic) NSArray *URLPrefixMatches;
@property (retain, nonatomic) NSArray *appIdentifierMatches;
@property (retain, nonatomic) NSString *accountGUID;
@property (retain, nonatomic) NSString *accountTypeGUID;

- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)description;
- (BOOL)validateAppIdentifierMatch:(id)a0 outError:(id *)a1;
- (BOOL)validateURLPrefixMatch:(id)a0 outNormalizedString:(id *)a1 outError:(id *)a2;

@end
