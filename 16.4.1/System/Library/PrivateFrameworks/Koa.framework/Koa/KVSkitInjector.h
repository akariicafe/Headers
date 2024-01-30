@class NSString, KVTokenizer;

@interface KVSkitInjector : NSObject <KVSkitReadAccess, KVSkitAccessProvider> {
    KVTokenizer *_tokenizer;
    struct Indexer { struct ContextV2 { struct shared_ptr<skit::internal::ContextImpl> { struct ContextImpl *__ptr_; struct __shared_weak_count *__cntrl_; } pimpl; } context; struct IndexWriter { struct unique_ptr<skit::internal::IndexWriterImpl, std::default_delete<skit::internal::IndexWriterImpl>> { struct __compressed_pair<skit::internal::IndexWriterImpl *, std::default_delete<skit::internal::IndexWriterImpl>> { struct IndexWriterImpl *__value_; } __ptr_; } pimpl; } index_writer; unsigned char index_locale; struct basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> { struct __compressed_pair<std::basic_string<char16_t>::__rep, std::allocator<char16_t>> { struct __rep { union { struct __long { unsigned short *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { unsigned short __data_[11]; unsigned char __padding_[1]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } index_locale_id; struct shared_ptr<skitbridge::Tokenizer> { struct Tokenizer *__ptr_; struct __shared_weak_count *__cntrl_; } tokenizer; struct shared_ptr<skitbridge::Analyzer> { struct Analyzer *__ptr_; struct __shared_weak_count *__cntrl_; } analyzer; struct Alias { struct shared_ptr<skit::internal::AliasImpl> { struct AliasImpl *__ptr_; struct __shared_weak_count *__cntrl_; } pimpl; } alias; } _indexer;
    struct Searcher { struct ContextV2 { struct shared_ptr<skit::internal::ContextImpl> { struct ContextImpl *__ptr_; struct __shared_weak_count *__cntrl_; } pimpl; } context; struct IndexReader { struct shared_ptr<skit::internal::IndexReaderImpl> { struct IndexReaderImpl *__ptr_; struct __shared_weak_count *__cntrl_; } pimpl; } index_reader; struct Alias { struct shared_ptr<skit::internal::AliasImpl> { struct AliasImpl *__ptr_; struct __shared_weak_count *__cntrl_; } pimpl; } alias; } _searcher;
    struct vector<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>, std::allocator<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<skitbridge::SearchGroup, std::vector<std::byte>> *, std::allocator<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>>> { void *__value_; } __end_cap_; } _documents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prewarm;
- (BOOL)supportsMultiUser;
- (id)accessReadOnlySkitForUser:(id)a0;
- (id).cxx_construct;
- (id)indexLocale;
- (id)init;
- (BOOL)setItems:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)_buildDocumentsFromItems:(id)a0 error:(id *)a1;
- (id)initWithItems:(id)a0 tokenizer:(id)a1 error:(id *)a2;
- (id)matchSpans:(id)a0 error:(id *)a1;

@end
