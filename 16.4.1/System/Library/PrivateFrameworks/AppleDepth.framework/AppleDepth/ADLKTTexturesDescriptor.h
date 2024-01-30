@class NSArray, ADImageDescriptor, NSMutableArray;

@interface ADLKTTexturesDescriptor : NSObject

@property (readonly, nonatomic) unsigned long long scales;
@property (readonly, nonatomic) ADImageDescriptor *inputDescriptor;
@property (readonly, nonatomic) NSArray *pyramidsDescriptors;
@property (readonly, nonatomic) NSArray *featuresDescriptors;
@property (readonly, nonatomic) NSArray *derivitivesDescriptors;
@property (readonly, nonatomic) ADImageDescriptor *shiftmapDescriptor;
@property (readonly, nonatomic) struct { unsigned long long scales; NSMutableArray *nwarpings; BOOL useNonLocalRegularization; int nlreg_radius; int nlreg_padding; float nlreg_sigma_l; float nlreg_sigma_c; float nlreg_sigma_w; } opticalFlowConfig;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })inputSizeForLayout:(unsigned long long)a0;
- (id)initForSupportedSizes:(id)a0 config:(struct { unsigned long long x0; id x1; BOOL x2; int x3; int x4; float x5; float x6; float x7; })a1;

@end
