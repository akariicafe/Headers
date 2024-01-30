@class NSString, NSDictionary, NSArray, BWFigCaptureDevice, BWFigCaptureStream;

@interface FigCaptureSourceStreamsContainer : NSObject {
    BWFigCaptureDevice *_device;
    NSArray *_streams;
    NSDictionary *_baseZoomFactorsByPortType;
}

@property (readonly, nonatomic) int deviceType;
@property (readonly, nonatomic) int stillImageDepthDataType;
@property (readonly, nonatomic) BWFigCaptureStream *primaryStream;
@property (readonly, nonatomic) NSDictionary *streamsByPortType;
@property (readonly, nonatomic) NSString *portTypeSupportingDepth;
@property (readonly, nonatomic) float minZoomFactorForDepth;
@property (readonly, nonatomic) BWFigCaptureStream *streamProvidingSDOFRenderingParameters;
@property (readonly, nonatomic) NSArray *switchOverZoomFactors;

- (void)dealloc;
- (int)_populateStreamsFromDeviceVendorForPosition:(int)a0 baseZoomFactorOverrides:(id)a1;
- (id)initWithDeviceType:(int)a0 position:(int)a1 stillImageDepthDataType:(int)a2 device:(id)a3 baseZoomFactorOverrides:(id)a4;

@end
