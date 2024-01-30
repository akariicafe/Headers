@class NSString, MTLTextureDescriptor;

@interface FigMetalTextureDescriptor : NSObject

@property (nonatomic) BOOL isLinear;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) MTLTextureDescriptor *desc;

- (id)init;
- (void).cxx_destruct;

@end
