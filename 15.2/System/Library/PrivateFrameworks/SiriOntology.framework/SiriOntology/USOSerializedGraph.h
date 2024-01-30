@class NSString, NSArray;

@interface USOSerializedGraph : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *printedForm;
@property (retain, nonatomic) NSArray *nodes;
@property (retain, nonatomic) NSArray *edges;
@property (retain, nonatomic) NSArray *identifiers;
@property (retain, nonatomic) NSArray *alignments;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph *x0; } x0; })toCppUsoGraph:(struct shared_ptr<siri::ontology::UsoVocabManager> { struct UsoVocabManager *x0; struct __shared_weak_count *x1; })a0 withError:(id *)a1;
- (id)initWithUsoGraph:(const void *)a0 withError:(id *)a1;
- (id)createSerializedNode:(const struct UsoGraphNode { void /* function */ **x0; struct UsoGraph *x1; unsigned long long x2; } *)a0 withError:(id *)a1;
- (id)getIdentifiersIfExists:(const struct UsoGraphNode { void /* function */ **x0; struct UsoGraph *x1; unsigned long long x2; } *)a0 nodeIndex:(unsigned long long)a1;
- (id)getUtteranceAlignmentsIfExists:(const struct UsoGraphNode { void /* function */ **x0; struct UsoGraph *x1; unsigned long long x2; } *)a0 nodeIndex:(unsigned long long)a1;
- (const void *)getOrCreateNodeName:(id)a0 withVocabManager:(struct shared_ptr<siri::ontology::UsoVocabManager> { struct UsoVocabManager *x0; struct __shared_weak_count *x1; })a1 withError:(id *)a2;
- (const void *)getOrCreateVerbName:(id)a0 withVocabManager:(struct shared_ptr<siri::ontology::UsoVocabManager> { struct UsoVocabManager *x0; struct __shared_weak_count *x1; })a1 withError:(id *)a2;
- (const void *)getOrCreateEdgeName:(id)a0 withVocabManager:(struct shared_ptr<siri::ontology::UsoVocabManager> { struct UsoVocabManager *x0; struct __shared_weak_count *x1; })a1 withError:(id *)a2;
- (id)initWithNodes:(id)a0 edges:(id)a1;
- (id)initWithNodes:(id)a0 edges:(id)a1 identifiers:(id)a2 alignments:(id)a3;

@end
