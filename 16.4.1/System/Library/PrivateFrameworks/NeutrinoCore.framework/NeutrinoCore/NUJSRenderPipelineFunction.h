@class NSDictionary, NSString;

@interface NUJSRenderPipelineFunction : NURenderPipelineFunction {
    NSDictionary *_params;
    NSString *_source;
}

- (id)evaluate:(id)a0 error:(out id *)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0 source:(id)a1;
- (BOOL)isEqualToFunction:(id)a0;

@end
