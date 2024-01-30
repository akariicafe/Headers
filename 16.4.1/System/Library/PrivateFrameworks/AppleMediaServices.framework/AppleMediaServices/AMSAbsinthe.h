@class NSString, AMSBagKeySet;

@interface AMSAbsinthe : NSObject <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)_dataToSignFromRequest:(id)a0 bagDefinition:(id)a1;
+ (id)headersForRequest:(id)a0 buyParams:(id)a1 bag:(id)a2;
+ (void)_signingDataFromRequest:(id)a0 buyParams:(id)a1 bag:(id)a2 completion:(id /* block */)a3;
+ (id)handleResponse:(id)a0 bag:(id)a1;


@end
