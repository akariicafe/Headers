@class PMLSparseVector, SGModelSource;

@interface SGModelFeatures : NSObject {
    SGModelSource *_source;
    PMLSparseVector *_vector;
}

- (void).cxx_destruct;
- (id)vector;
- (id)source;
- (id)sessionDescriptor;
- (id)initWithSource:(id)a0 vector:(id)a1;

@end
