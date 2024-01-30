@class NSURL, NSMutableDictionary;

@interface SCNReferenceNode : SCNNode {
    NSURL *_referenceURL;
    BOOL _loaded;
    NSMutableDictionary *_overrides;
    NSURL *_catalogURL;
    NSURL *_sourceDocumentURL;
}

@property (copy, nonatomic) NSURL *referenceURL;
@property (nonatomic) long long loadingPolicy;
@property (readonly, getter=isLoaded) BOOL loaded;

+ (BOOL)supportsSecureCoding;
+ (id)referenceNodeWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)load;
- (id)initWithCoder:(id)a0;
- (id)overrides;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setOverrides:(id)a0;
- (id)description;
- (id)_catalog;
- (void)unload;
- (id)_resolveURL;
- (void)_applyOverrides;
- (void)_applyOverride:(id)a0 forKeyPath:(id)a1;
- (void)_applyUnsharing:(id)a0 alreadyShared:(id)a1;
- (void)_diffNode:(id)a0 with:(id)a1 path:(id)a2;
- (void)_diffObject:(id)a0 with:(id)a1 path:(id)a2;
- (BOOL)_isAReference;
- (BOOL)_isNameUnique:(id)a0;
- (id)_loadReferencedSceneWithURL:(id)a0 catalog:(id)a1;
- (void)_loadWithCatalog:(id)a0;
- (void)_loadWithURL:(id)a0;
- (void)_loadWithURL:(id)a0 catalog:(id)a1;
- (void)addOverride:(id)a0 forKeyPath:(id)a1;
- (void)collectOverrides;
- (void)removeAllOverrides;
- (void)removeForKeyPath:(id)a0;
- (void)setOverride:(id)a0 forKeyPath:(id)a1;

@end
