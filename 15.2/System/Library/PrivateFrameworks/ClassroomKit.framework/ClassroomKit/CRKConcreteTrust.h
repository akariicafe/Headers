@class NSString;
@protocol CRKCertificate;

@interface CRKConcreteTrust : NSObject <CRKTrust>

@property (readonly, nonatomic) id<CRKCertificate> leafCertificate;
@property (readonly, nonatomic) struct __SecTrust { } *underlyingTrust;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (void)dealloc;

@end
