@class NSString;

@interface PKLiveRenderedShaderSet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *geometryEntryPointShader;
@property (readonly, copy, nonatomic) NSString *surfaceEntryPointShader;
@property (readonly, copy, nonatomic) NSString *lightingModelEntryPointShader;
@property (readonly, copy, nonatomic) NSString *fragmentEntryPointShader;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDataAccessor:(id)a0 suffix:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
