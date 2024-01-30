@class NSString, BCSDomainBundleIdPatterns, NSDate;

@interface BCSDomainItem : NSObject <BCSDomainItemProtocol>

@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *base64EncodedShardString;
@property (retain, nonatomic) BCSDomainBundleIdPatterns *domainBundleIDPatterns;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

- (void).cxx_destruct;
- (id)initWithBase64EncodedShardString:(id)a0 expirationDate:(id)a1;

@end
