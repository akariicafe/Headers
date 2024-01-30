@class PMLSparseVector, SGModelSource;

@interface SGModelFeatures : NSObject {
    SGModelSource *_source;
    PMLSparseVector *_vector;
}

- (id)source;
- (id)vector;
- (void).cxx_destruct;
- (id)initWithSource:(id)a0 vector:(id)a1;
- (id)sessionDescriptor;

@end
