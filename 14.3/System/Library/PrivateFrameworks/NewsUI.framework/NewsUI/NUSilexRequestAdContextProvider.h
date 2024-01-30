@class NSString, SXAdRequest;

@interface NUSilexRequestAdContextProvider : NSObject <NUAdContextProvider>

@property (readonly, nonatomic) SXAdRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)a0;
- (id)contextProvidersForKeyPath:(id)a0;
- (id)initWithAdRequest:(id)a0;
- (id)creativeTypeFromBannerType:(unsigned long long)a0;

@end
