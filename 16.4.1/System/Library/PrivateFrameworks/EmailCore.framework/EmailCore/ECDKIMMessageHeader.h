@class NSString, NSArray, NSData, NSMutableDictionary, NSNumber;

@interface ECDKIMMessageHeader : NSObject {
    NSMutableDictionary *_headerFields;
}

@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) unsigned long long signingAlgorithm;
@property (readonly, nonatomic) unsigned long long hashingAlgorithm;
@property (readonly, copy, nonatomic) NSData *signatureData;
@property (readonly, copy, nonatomic) NSString *canonicalizedBodyHash;
@property (readonly, nonatomic) unsigned long long bodyCanonicalizationAlgorithm;
@property (readonly, nonatomic) unsigned long long headerCanonicalizationAlgorithm;
@property (readonly, copy, nonatomic) NSString *signingDomainIdentifier;
@property (readonly, copy, nonatomic) NSArray *signedHeaderFields;
@property (readonly, copy, nonatomic) NSString *agentOrUserIdentifier;
@property (readonly, nonatomic) NSNumber *bodyLength;
@property (readonly, copy, nonatomic) NSArray *queryMethods;
@property (readonly, nonatomic) NSString *selector;
@property (readonly, nonatomic) double signatureTimestamp;
@property (readonly, nonatomic) double signatureExpiration;
@property (readonly, nonatomic) NSArray *copiedHeaderFields;
@property (readonly, nonatomic) NSString *headerNameForCanonicalization;
@property (readonly, nonatomic) NSString *bodyForCanonicalization;

- (void).cxx_destruct;
- (BOOL)_isValidDomain:(id)a0;
- (id)_errorForInvalidOptionalKey:(id)a0 actualValue:(id)a1 expectedValue:(id)a2;
- (id)_errorForInvalidRequiredKey:(id)a0 actualValue:(id)a1 expectedValue:(id)a2;
- (id)_errorForMissingRequiredKey:(id)a0;
- (id)_parseAgentOrUserIdentifierWithSigningDomainIdentifier:(id)a0;
- (id)_parseBodyLength;
- (id)_parseCanonicalizedBodyHash;
- (id)_parseCopiedHeaderFields;
- (id)_parseMessageCanonicalizationAlgorithm;
- (id)_parseQueryMethod;
- (id)_parseSelector;
- (id)_parseSignatureDataWithHeaderBody:(id)a0;
- (id)_parseSignatureExpiration;
- (id)_parseSignatureTimestamp;
- (id)_parseSignedHeaderFields;
- (id)_parseSigningAlgorithm;
- (id)_parseSigningDomainIdentifier;
- (id)_parseVersion;
- (id)initWithHeaderFieldName:(id)a0 headerBody:(id)a1 error:(out id *)a2;

@end
