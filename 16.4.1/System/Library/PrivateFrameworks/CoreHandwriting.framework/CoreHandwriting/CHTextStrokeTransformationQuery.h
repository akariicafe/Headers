@interface CHTextStrokeTransformationQuery : CHQuery

- (id)debugName;
- (id)strokePointTransformationsForContextStrokes:(id)a0 completionWithTelemetry:(id /* block */)a1 shouldCancel:(id /* block */)a2;
- (id)strokePointTransformationsForContextStrokes:(id)a0 completion:(id /* block */)a1 shouldCancel:(id /* block */)a2;

@end
