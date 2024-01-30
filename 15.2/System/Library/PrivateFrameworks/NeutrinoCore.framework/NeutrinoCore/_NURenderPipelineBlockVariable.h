@interface _NURenderPipelineBlockVariable : NURenderPipelineFunction {
    id /* block */ _evaluationBlock;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)evaluate:(id)a0 error:(out id *)a1;
- (unsigned long long)hash;
- (id)initWithEvaluationBlock:(id /* block */)a0;
- (BOOL)isEqualToBlockVariable:(id)a0;

@end
