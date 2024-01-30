@class NUComposition, NUCompositionSourceDefinition;

@interface NUCompositionSource : NUSource {
    NUCompositionSourceDefinition *_sourceDefinition;
}

@property (readonly, nonatomic) NUComposition *composition;

- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sourceDefinition:(out id *)a0;

@end
