@class NSArray, ADImageDescriptor;

@interface ADLKTTexturesDescriptor : NSObject

@property (readonly, nonatomic) unsigned long long scales;
@property (readonly, nonatomic) ADImageDescriptor *inputDescriptor;
@property (readonly, nonatomic) NSArray *pyramidsDescriptors;
@property (readonly, nonatomic) NSArray *featuresDescriptors;
@property (readonly, nonatomic) NSArray *derivitivesDescriptors;
@property (readonly, nonatomic) ADImageDescriptor *shiftmapDescriptor;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })inputSizeForLayout:(unsigned long long)a0;
- (id)initForSize:(struct CGSize { double x0; double x1; })a0 scales:(unsigned int)a1;

@end
