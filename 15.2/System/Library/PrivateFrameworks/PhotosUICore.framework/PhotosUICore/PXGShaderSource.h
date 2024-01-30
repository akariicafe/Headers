@class NSString, NSDictionary;

@interface PXGShaderSource : NSObject <NSCopying> {
    NSDictionary *_sourceByShaderFunction;
}

@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) NSString *otherSource;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) long long length;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSource:(id)a0;
- (id)sourceForShaderFunction:(id)a0;
- (void)_parseShader;

@end
