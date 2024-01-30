@class NSString, NSArray, NSDictionary, USKToken;

@interface USKNode : USKObject {
    struct UsdPrim { int _type; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_20__pxrReserved__usdkit__::Usd_PrimData> { struct Usd_PrimData *px; } _p; } _prim; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _primPart; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _propPart; } _proxyPrimPath; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_20__pxrReserved__usdkit__::TfToken::_Rep> { struct _Rep *_ptrAndBits; } _rep; } _propName; } _prim;
}

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) USKToken *typeName;
@property (readonly, nonatomic) NSArray *schemaTypes;
@property (readonly, nonatomic) NSDictionary *properties;

- (void)setSpecifier:(id)a0;
- (id)propertyList;
- (id)path;
- (id)specifier;
- (void).cxx_destruct;
- (id)metadata;
- (unsigned long long)hash;
- (id)parent;
- (BOOL)removeProperty:(id)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (struct UsdPrim { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_20__pxrReserved__usdkit__::Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_20__pxrReserved__usdkit__::TfToken::_Rep> { struct _Rep *x0; } x0; } x3; })usdPrim;
- (void)clearReferences;
- (id)property:(id)a0;
- (id)newPropertyWithName:(id)a0 type:(id)a1 role:(id)a2;
- (BOOL)setMetadataWithKey:(id)a0 value:(id)a1;
- (id)childIterator;
- (id)metadataWithKey:(id)a0;
- (BOOL)setDictionaryMetadataWithKey:(id)a0 dictionaryKey:(id)a1 value:(id)a2;
- (void)applyType:(id)a0;
- (id)customMetadataWithKey:(id)a0;
- (id)loadedChildIterator;
- (id)inheritedSkeletonBinding;
- (id)inheritedMaterialBinding;
- (id)inheritedSkeletonAnimationBinding;
- (id)initWithUsdPrim:(struct UsdPrim { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_20__pxrReserved__usdkit__::Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_20__pxrReserved__usdkit__::TfToken::_Rep> { struct _Rep *x0; } x0; } x3; })a0;
- (BOOL)setCustomMetadata:(id)a0 value:(id)a1;
- (id)dictionaryMetadataWithKey:(id)a0 dictionaryKey:(id)a1;
- (id)inheritedProperty:(id)a0;
- (BOOL)selectVariant:(id)a0 variantSet:(id)a1;
- (id)newPropertyWithName:(id)a0 type:(id)a1 role:(id)a2 variability:(BOOL)a3;
- (BOOL)hasSchemaType:(id)a0;
- (void)addReferenceWithURL:(id)a0 nodePath:(id)a1;
- (void)addReferenceWithPath:(id)a0 nodePath:(id)a1;
- (void)addReferenceWithPath:(id)a0 nodePath:(id)a1 offset:(id)a2;
- (void)addVariantSet:(id)a0;
- (void)addVariant:(id)a0 variantSet:(id)a1;
- (BOOL)hasVariantSets;
- (BOOL)hasVariantSet:(id)a0;
- (id)variantSets;
- (id)variantsWithVariantSet:(id)a0;
- (BOOL)editVariant:(id)a0 variantSet:(id)a1 block:(id /* block */)a2;
- (BOOL)isInstanceNode;
- (id)masterNode;
- (id)newCustomPropertyWithName:(id)a0 type:(id)a1 role:(id)a2;
- (id)subtreeIterator;
- (id)loadedSubtreeIterator;

@end
