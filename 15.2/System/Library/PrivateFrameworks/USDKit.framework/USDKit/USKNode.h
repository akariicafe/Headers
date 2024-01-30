@class NSString, NSArray, NSDictionary, USKScene, USKToken;

@interface USKNode : USKObject {
    struct UsdPrim { int _type; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_20__pxrReserved__usdkit__::Usd_PrimData> { struct Usd_PrimData *px; } _p; } _prim; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _primPart; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _propPart; } _proxyPrimPath; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_20__pxrReserved__usdkit__::TfToken::_Rep> { struct _Rep *_ptrAndBits; } _rep; } _propName; } _prim;
    USKScene *_owner;
}

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) USKToken *typeName;
@property (readonly, nonatomic) NSArray *schemaTypes;
@property (readonly, nonatomic) NSDictionary *properties;

- (id)parent;
- (id)propertyList;
- (id)specifier;
- (void)clearReferences;
- (void)setSpecifier:(id)a0;
- (BOOL)removeProperty:(id)a0;
- (id)metadata;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (id)path;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)newPropertyWithName:(id)a0 type:(id)a1 role:(id)a2;
- (BOOL)setDictionaryMetadataWithKey:(id)a0 dictionaryKey:(id)a1 value:(id)a2;
- (BOOL)setMetadataWithKey:(id)a0 value:(id)a1;
- (void)applyType:(id)a0;
- (id)dictionaryMetadataWithKey:(id)a0 dictionaryKey:(id)a1;
- (BOOL)hasVariantSets;
- (id)variantsWithVariantSet:(id)a0;
- (id)inheritedMaterialBinding;
- (BOOL)selectVariant:(id)a0 variantSet:(id)a1;
- (id)inheritedSkeletonBinding;
- (id)inheritedSkeletonAnimationBinding;
- (id)childIterator;
- (id)property:(id)a0;
- (id)customMetadataWithKey:(id)a0;
- (id)metadataWithKey:(id)a0;
- (id)loadedChildIterator;
- (id)inheritedProperty:(id)a0;
- (id)initWithUsdPrim:(struct UsdPrim { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_20__pxrReserved__usdkit__::Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_20__pxrReserved__usdkit__::TfToken::_Rep> { struct _Rep *x0; } x0; } x3; })a0 withSceneOwner:(id)a1;
- (BOOL)setCustomMetadata:(id)a0 value:(id)a1;
- (struct UsdPrim { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_20__pxrReserved__usdkit__::Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_20__pxrReserved__usdkit__::TfToken::_Rep> { struct _Rep *x0; } x0; } x3; })usdPrim;
- (id)initWithUsdPrim:(struct UsdPrim { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_20__pxrReserved__usdkit__::Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_20__pxrReserved__usdkit__::TfToken::_Rep> { struct _Rep *x0; } x0; } x3; })a0;
- (id)newPropertyWithName:(id)a0 type:(id)a1 role:(id)a2 variability:(BOOL)a3;
- (BOOL)hasSchemaType:(id)a0;
- (void)addReferenceWithURL:(id)a0 nodePath:(id)a1;
- (void)addReferenceWithPath:(id)a0 nodePath:(id)a1;
- (void)addReferenceWithPath:(id)a0 nodePath:(id)a1 offset:(id)a2;
- (void)addVariantSet:(id)a0;
- (void)addVariant:(id)a0 variantSet:(id)a1;
- (BOOL)hasVariantSet:(id)a0;
- (id)variantSets;
- (BOOL)editVariant:(id)a0 variantSet:(id)a1 block:(id /* block */)a2;
- (BOOL)clearVariantSelectionForVariantSet:(id)a0;
- (BOOL)isInstanceNode;
- (id)masterNode;
- (id)newCustomPropertyWithName:(id)a0 type:(id)a1 role:(id)a2;
- (id)subtreeIterator;
- (id)loadedSubtreeIterator;

@end
