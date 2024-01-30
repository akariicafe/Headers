@class NSString, TPSAssets;

@interface TPSAssetsConfiguration : NSObject

@property (nonatomic) long long opacity;
@property (nonatomic) long long userInterface;
@property (nonatomic) long long viewMode;
@property (nonatomic) long long capability;
@property (copy, nonatomic) TPSAssets *assets;
@property (copy, nonatomic) NSString *language;

- (id)initWithAssets:(id)a0 language:(id)a1;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)identifierForType:(long long)a0;
- (id)cacheIdentifierForType:(long long)a0;

@end
