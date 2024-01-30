@class NSArray, NSString, NSDictionary, CIBarcodeDescriptor;

@interface AVMetadataMachineReadableCodeObjectInternal : NSObject

@property (retain) NSArray *corners;
@property (retain) NSString *stringValue;
@property (retain) NSDictionary *basicDescriptor;
@property BOOL decoded;
@property (retain) CIBarcodeDescriptor *descriptor;

- (void)dealloc;

@end
