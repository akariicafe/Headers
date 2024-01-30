@class NSURL, TIAssetAttributes, NSArray;

@interface TIAsset : NSObject {
    long long _numberOfAssertions;
}

@property (readonly, nonatomic) TIAssetAttributes *attributes;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) long long contentVersion;
@property (readonly, nonatomic) long long compatibilityVersion;
@property (readonly, nonatomic) NSArray *contents;
@property (readonly, nonatomic) BOOL isCompatible;
@property (readonly, nonatomic) unsigned long long sizeInBytes;

+ (long long)supportedCompatibilityVersion;
+ (BOOL)shouldLenientlyMatchWithContentItemsForRegion:(id)a0;
+ (id)knownAssetTypes;

- (void).cxx_destruct;
- (BOOL)hasAssertions;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)recursiveDescription;
- (id)initWithASAsset:(id)a0;
- (id)initWithAttributes:(id)a0 url:(id)a1 contentVersion:(long long)a2 compatibilityVersion:(long long)a3 sizeInBytes:(unsigned long long)a4 contents:(id)a5;
- (id)assetContentItemsMatching:(id)a0;
- (id)laterAsset:(id)a0;
- (void)addAssertion;
- (void)removeAssertion;

@end
