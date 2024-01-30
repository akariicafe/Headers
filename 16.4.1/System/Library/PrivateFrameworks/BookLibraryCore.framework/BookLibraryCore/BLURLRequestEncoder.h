@class NSNumber, NSString;

@interface BLURLRequestEncoder : AMSURLRequestEncoder <AMSRequestEncoding>

@property (retain, nonatomic) NSNumber *dsid;
@property (nonatomic) long long reason;
@property (nonatomic) unsigned long long contentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)DAAPPurchaseVersionString;
+ (id)DAAPClientVersionString;

- (id)requestByEncodingRequest:(id)a0 parameters:(id)a1;
- (id)initWithBag:(id)a0 withURLRequest:(id)a1;
- (void).cxx_destruct;

@end
