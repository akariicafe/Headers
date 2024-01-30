@interface _MPMediaLibraryEntityPropertyTranslator : NSObject

@property (nonatomic) struct shared_ptr<std::unordered_map<std::string, mlcore::ModelPropertyBase *>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } propertiesToFetchMap;
@property (nonatomic) struct shared_ptr<std::unordered_map<std::string, mlcore::ModelPropertyBase *>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } propertiesToSortMap;
@property (copy, nonatomic) id /* block */ sortTransformer;
@property (copy, nonatomic) id /* block */ filterTransformer;
@property (copy, nonatomic) id /* block */ valueTransformer;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
