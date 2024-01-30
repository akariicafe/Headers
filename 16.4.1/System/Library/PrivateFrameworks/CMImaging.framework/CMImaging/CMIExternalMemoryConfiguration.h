@class NSDictionary;

@interface CMIExternalMemoryConfiguration : NSObject

@property (readonly, nonatomic) struct { int width; int height; } maxInputDimensions;
@property (readonly, nonatomic) unsigned int inputPixelFormat;
@property (readonly, nonatomic) struct { int width; int height; } maxOutputDimensions;
@property (readonly, nonatomic) NSDictionary *processorSpecificOptions;

- (id)description;
- (void).cxx_destruct;
- (id)initWithMaxInputDimensions:(struct { int x0; int x1; })a0 inputPixelFormat:(unsigned int)a1 maxOutputDimensions:(struct { int x0; int x1; })a2 processorSpecificOptions:(id)a3;

@end
