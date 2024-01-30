@class NSArray;

@interface FPSetTagsOperation : FPTransformOperation {
    NSArray *_tagsLists;
}

- (id)fp_prettyDescription;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 tagsLists:(id)a1;
- (id)replicateForItems:(id)a0;
- (unsigned long long)transformItem:(id)a0 atIndex:(unsigned long long)a1;

@end
