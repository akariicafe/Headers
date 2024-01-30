@class HAP2AccessoryServerAccessoryCache;

@interface HAP2AccessoryServerControllerAttributeRequestOperation : HAP2AccessoryServerControllerOperation {
    HAP2AccessoryServerAccessoryCache *_cache;
}

+ (id)_parseCache:(id)a0;
+ (id)_characteristicsFromCachedCharacteristics:(id)a0;

- (void)_cleanUp;
- (void).cxx_destruct;
- (void)main;
- (void)_sendRequest;

@end
