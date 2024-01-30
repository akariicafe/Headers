@class NSString, NSObject;
@protocol OS_dispatch_data;

@interface TSPUnknownObjectUnarchiver : TSPUnarchiver {
    struct shared_ptr<TSP::ArchiveInfo> { struct ArchiveInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _archiveInfo;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *messagesData;
@property (readonly, nonatomic) NSString *packageLocator;

- (void).cxx_destruct;
- (id).cxx_construct;
- (const struct Message { void /* function */ **x0; } *)message;
- (BOOL)canValidateReferences;
- (id)initWithMessageType:(unsigned int)a0 message:(struct unique_ptr<google::protobuf::Message, std::__1::default_delete<google::protobuf::Message> > { struct __compressed_pair<google::protobuf::Message *, std::__1::default_delete<google::protobuf::Message> > { struct Message *x0; } x0; })a1 identifier:(long long)a2 strongReferences:(struct unique_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >, std::__1::default_delete<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > > { struct __compressed_pair<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > *, std::__1::default_delete<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > > { struct unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > *x0; } x0; })a3 messageVersion:(unsigned long long)a4 unknownContent:(id)a5 objectDelegate:(id)a6 lazyReferenceDelegate:(id)a7 delegate:(id)a8;
- (id)initWithIdentifier:(long long)a0 archiveInfo:(struct shared_ptr<TSP::ArchiveInfo> { struct ArchiveInfo *x0; struct __shared_weak_count *x1; })a1 messagesData:(id)a2 packageLocator:(id)a3 objectDelegate:(id)a4 lazyReferenceDelegate:(id)a5 delegate:(id)a6;
- (struct shared_ptr<TSP::ArchiveInfo> { struct ArchiveInfo *x0; struct __shared_weak_count *x1; })archiveInfo;

@end
