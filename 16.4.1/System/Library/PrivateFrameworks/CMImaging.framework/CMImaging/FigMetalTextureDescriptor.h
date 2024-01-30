@class NSString, MTLTextureDescriptor;

@interface FigMetalTextureDescriptor : NSObject

@property (nonatomic) BOOL isLinear;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) MTLTextureDescriptor *desc;

- (id)init;
- (void).cxx_destruct;
- (void)initFromDescriptor:(id)a0;

@end
