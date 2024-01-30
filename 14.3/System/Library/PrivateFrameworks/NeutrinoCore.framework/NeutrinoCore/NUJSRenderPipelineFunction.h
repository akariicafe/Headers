@class NSDictionary, NSString;

@interface NUJSRenderPipelineFunction : NURenderPipelineFunction {
    NSDictionary *_params;
    NSString *_source;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)evaluate:(id)a0 error:(out id *)a1;
- (id)initWithParameters:(id)a0 source:(id)a1;
- (BOOL)isEqualToFunction:(id)a0;

@end
