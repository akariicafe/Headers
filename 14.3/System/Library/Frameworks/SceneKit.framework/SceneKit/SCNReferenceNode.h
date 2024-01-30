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

- (void)load;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)unload;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)description;
- (void)setOverrides:(id)a0;
- (id)overrides;
- (id)_catalog;
- (void)encodeWithCoder:(id)a0;
- (id)_resolveURL;
- (BOOL)_isNameUnique:(id)a0;
- (void)_diffObject:(id)a0 with:(id)a1 path:(id)a2;
- (void)_diffNode:(id)a0 with:(id)a1 path:(id)a2;
- (void)removeAllOverrides;
- (id)_loadReferencedSceneWithURL:(id)a0 catalog:(id)a1;
- (void)_applyUnsharing:(id)a0 alreadyShared:(id)a1;
- (void)_applyOverride:(id)a0 forKeyPath:(id)a1;
- (void)_loadWithCatalog:(id)a0;
- (void)_loadWithURL:(id)a0 catalog:(id)a1;
- (void)_applyOverrides;
- (void)collectOverrides;
- (void)addOverride:(id)a0 forKeyPath:(id)a1;
- (void)removeForKeyPath:(id)a0;
- (void)setOverride:(id)a0 forKeyPath:(id)a1;
- (BOOL)_isAReference;
- (void)_loadWithURL:(id)a0;

@end
