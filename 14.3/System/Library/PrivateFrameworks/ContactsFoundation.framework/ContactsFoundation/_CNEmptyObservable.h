@interface _CNEmptyObservable : CNObservable

- (id)subscribe:(id)a0;
- (id)debugPipelineDescription;
- (id)pipelineDescription:(id /* block */)a0;
- (id)pipelineDescriptionWithOperation:(id /* block */)a0 onObservable:(id)a1;

@end
