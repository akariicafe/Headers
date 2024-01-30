@interface NETrie : NSObject {
    BOOL _reverse;
    BOOL _partialSearchAllowed;
    char _partialSearchTerminator;
    struct ne_trie { unsigned long long magic; unsigned long long version; struct ne_trie_node *nodes; unsigned short *child_maps; char *bytes; void *memory; unsigned short nodes_count; unsigned short child_maps_count; unsigned short bytes_count; unsigned short nodes_free_next; unsigned short child_maps_free_next; unsigned short bytes_free_next; unsigned short root; unsigned long long trie_memory_size; unsigned long long nodes_mem_size; unsigned long long child_maps_mem_size; unsigned long long bytes_mem_size; BOOL is_mmap; double timestamp; } _trie;
}

- (void)dealloc;
- (BOOL)searchWithString:(id)a0;
- (id)initWithDomains:(id)a0 reverse:(BOOL)a1 partialSearchAllowed:(BOOL)a2 partialSearchTerminator:(char)a3;
- (BOOL)search:(const char *)a0 length:(int)a1;

@end
