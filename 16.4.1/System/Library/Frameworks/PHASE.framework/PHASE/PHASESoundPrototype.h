@class NSString, NSArray, PHASEEngine, PHASESoundEventNodeAsset;

@interface PHASESoundPrototype : NSObject {
    PHASEEngine *_engine;
    PHASESoundEventNodeAsset *_programmaticAPIAsset;
}

@property (retain) NSString *assetUID;
@property (readonly) NSArray *mixerInformation;
@property (copy) NSString *assetIdentifier;

+ (id)new;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)assetUID;
- (void)deRegister;
- (id)initWithEngine:(id)a0 actionTreeRootNode:(id)a1 error:(id *)a2;
- (id)initWithEngine:(id)a0 actionTreeRootNode:(id)a1 outError:(id *)a2;
- (id)initWithEngine:(id)a0 registeredActionTreeIdentifier:(id)a1 error:(id *)a2;
- (id)initWithEngine:(id)a0 registeredActionTreeUID:(id)a1 outError:(id *)a2;
- (id)mixerInformation;
- (void)setAssetUID:(id)a0;

@end
