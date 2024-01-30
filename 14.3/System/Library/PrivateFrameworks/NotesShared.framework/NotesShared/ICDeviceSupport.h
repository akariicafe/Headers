@interface ICDeviceSupport : NSObject

+ (BOOL)deviceIsIPad;
+ (id)notesProductType;
+ (BOOL)deviceSupportsPencil;
+ (BOOL)deviceSupportsFaceID;
+ (BOOL)deviceSupportsTouchID;
+ (struct CGSize { double x0; double x1; })notesDeviceDrawingSize;

@end
