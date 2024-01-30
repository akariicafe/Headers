@class SIRINLUINTERNALPreprocessingWrapper;

@interface CDMNLUPreprocessResponseCommand : CDMServiceGraphProtoBackedCommand

@property (readonly, nonatomic) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper;

+ (id)innerProtoPropertyName;
+ (Class)innerProtoType;

- (void).cxx_destruct;
- (id)initWithPreprocessingWrapper:(id)a0;

@end
