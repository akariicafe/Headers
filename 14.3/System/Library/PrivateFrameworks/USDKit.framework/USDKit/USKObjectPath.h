@interface USKObjectPath : NSObject {
    struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _primPart; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _propPart; } _path;
}

- (struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; })path;
- (id)init;
- (void).cxx_destruct;
- (id)initWithToken:(id)a0;
- (id)initWithString:(id)a0;
- (unsigned long long)hash;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)stringValue;
- (id)propertyName;
- (id)tokenValue;
- (id)pathByAppendingPropertyComponent:(id)a0;
- (id)initWithSdfPath:(struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_20__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; })a0;
- (BOOL)isNodePath;
- (id)nodePath;
- (BOOL)isPropertyPath;

@end
