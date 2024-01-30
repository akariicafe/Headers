@interface _MPMediaLibraryEntityPropertyTranslator : NSObject

@property (nonatomic) struct shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > > { struct map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > *__ptr_; struct __shared_weak_count *__cntrl_; } propertiesToFetchMap;
@property (nonatomic) struct shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > > { struct map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > *__ptr_; struct __shared_weak_count *__cntrl_; } propertiesToSortMap;
@property (copy, nonatomic) id /* block */ sortTransformer;
@property (copy, nonatomic) id /* block */ valueTransformer;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
