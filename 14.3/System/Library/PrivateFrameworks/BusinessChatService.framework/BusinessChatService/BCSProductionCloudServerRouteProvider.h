@class NSString;

@interface BCSProductionCloudServerRouteProvider : NSObject <BCSCloudServerRouteProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)containerWithType:(long long)a0;
- (id)environmentWithType:(long long)a0;
- (id)apiKeyWithType:(long long)a0;
- (id)urlForLookupActionAPIWithType:(long long)a0;
- (id)urlForQueryActionAPIWithType:(long long)a0;

@end
