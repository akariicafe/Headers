@class NSArray;

@interface USORedactedData : NSObject {
    struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph *__value_; } __ptr_; } mRedactedGraph;
}

@property (nonatomic) struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph *x0; } x0; } redactedGraph;
@property (retain, nonatomic) NSArray *redactedList;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithRedactedGraph:(void *)a0 redactedList:(id)a1;

@end
