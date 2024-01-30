@class NSURL, NSString, NSDate;

@interface SFAutoFillOneTimeCode : NSObject

@property (readonly, copy, nonatomic) NSURL *_domainBoundTopLevelURL;
@property (readonly, copy, nonatomic) NSURL *_domainBoundEmbeddedURL;
@property (readonly, copy, nonatomic) NSString *detectedCode;
@property (readonly, copy, nonatomic) NSString *machineReadableCode;
@property (readonly, copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSString *displayCode;
@property (readonly, copy, nonatomic) NSString *GUID;
@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *embeddedDomain;
@property (readonly, nonatomic) NSDate *timestamp;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)_matchURL:(id)a0 withBoundDomainURL:(id)a1;
- (id)_secureURLForDomain:(id)a0;
- (id)initWithIMCoreDictionary:(id)a0;
- (long long)matchDomainWithURL:(id)a0;
- (long long)matchBoundDomainsWithFrameURLs:(id)a0;

@end
