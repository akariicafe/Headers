@class NSArray;

@interface RMDeclarationManifest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *activations;
@property (readonly, copy, nonatomic) NSArray *configurations;
@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, copy, nonatomic) NSArray *management;

+ (id)declarationManifestWithDeclarations:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActivations:(id)a0 configurations:(id)a1 assets:(id)a2 management:(id)a3;
- (BOOL)isEqualToManifest:(id)a0;

@end
