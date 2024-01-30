@class NSString, FCThreadSafeMutableDictionary;

@interface FCEphemeralAssetKeyCache : NSObject <FCAssetKeyCacheType>

@property (readonly, nonatomic) FCThreadSafeMutableDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)interestTokenForWrappingKeyIDs:(id)a0;
- (void)setWrappingKey:(id)a0 forWrappingKeyID:(id)a1;
- (id)wrappingKeyForWrappingKeyID:(id)a0;
- (void)removeAllWrappingKeys;

@end
