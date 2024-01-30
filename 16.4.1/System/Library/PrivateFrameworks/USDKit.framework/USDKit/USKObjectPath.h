@interface USKObjectPath : NSObject {
    struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _primPart; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _propPart; } _path;
}

- (id)stringValue;
- (struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; })path;
- (id).cxx_construct;
- (id)initWithToken:(id)a0;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)propertyName;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)tokenValue;
- (id)pathByAppendingPropertyComponent:(id)a0;
- (id)initWithSdfPath:(struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; })a0;
- (BOOL)isNodePath;
- (BOOL)isPropertyPath;
- (id)nodePath;

@end
