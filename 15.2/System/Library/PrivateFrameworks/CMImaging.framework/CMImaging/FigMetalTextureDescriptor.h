@class NSString, MTLTextureDescriptor;

@interface FigMetalTextureDescriptor : NSObject

@property (nonatomic) BOOL isLinear;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) MTLTextureDescriptor *desc;

- (void).cxx_destruct;
- (id)init;
- (void)initFromDescriptor:(id)a0;

@end
