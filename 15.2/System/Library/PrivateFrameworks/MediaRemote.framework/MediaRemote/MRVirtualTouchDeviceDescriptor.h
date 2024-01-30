@interface MRVirtualTouchDeviceDescriptor : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic, getter=isAbsolute) BOOL absolute;
@property (readonly, nonatomic, getter=isIntegratedDisplay) BOOL integratedDisplay;
@property (readonly, nonatomic) union _MRHIDSize { struct { float width; float height; } ; float data[2]; } screenSize;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
