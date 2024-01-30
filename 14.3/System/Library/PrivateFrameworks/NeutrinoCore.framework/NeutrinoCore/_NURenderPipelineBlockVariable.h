@interface _NURenderPipelineBlockVariable : NURenderPipelineFunction {
    id /* block */ _evaluationBlock;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)evaluate:(id)a0 error:(out id *)a1;
- (id)initWithEvaluationBlock:(id /* block */)a0;
- (BOOL)isEqualToBlockVariable:(id)a0;

@end
