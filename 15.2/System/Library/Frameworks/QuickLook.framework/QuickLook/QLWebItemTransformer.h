@interface QLWebItemTransformer : QLItemTransformer

+ (id)allowedOutputClasses;

- (id)transformedContentsFromURL:(id)a0 context:(id)a1 error:(id *)a2;
- (id)transformedContentsFromData:(id)a0 context:(id)a1 error:(id *)a2;

@end
