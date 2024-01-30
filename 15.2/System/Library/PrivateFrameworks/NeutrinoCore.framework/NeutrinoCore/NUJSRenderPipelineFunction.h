@class NSDictionary, NSString;

@interface NUJSRenderPipelineFunction : NURenderPipelineFunction {
    NSDictionary *_params;
    NSString *_source;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)evaluate:(id)a0 error:(out id *)a1;
- (unsigned long long)hash;
- (id)initWithParameters:(id)a0 source:(id)a1;
- (BOOL)isEqualToFunction:(id)a0;

@end
