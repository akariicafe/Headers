@class MPMediaLibrary;

@interface MPMediaLibraryView : NSObject <NSCopying> {
    struct shared_ptr<mlcore::DeviceLibraryView> { struct DeviceLibraryView *__ptr_; struct __shared_weak_count *__cntrl_; } _coreView;
}

@property (readonly, nonatomic) struct shared_ptr<mlcore::DeviceLibraryView> { struct DeviceLibraryView *x0; struct __shared_weak_count *x1; } mlCoreView;
@property (readonly, nonatomic) MPMediaLibrary *library;
@property (readonly, nonatomic) unsigned long long filteringOptions;

- (void)performCoreQuery:(struct shared_ptr<mlcore::Query> { struct Query *x0; struct __shared_weak_count *x1; })a0 withCompletion:(id /* block */)a1;
- (struct shared_ptr<mlcore::QueryResult> { struct QueryResult *x0; struct __shared_weak_count *x1; })_performCoreQuery:(struct shared_ptr<mlcore::Query> { struct Query *x0; struct __shared_weak_count *x1; })a0 error:(id *)a1;
- (BOOL)hasEntitiesForModelKind:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)initWithLibrary:(id)a0 filteringOptions:(unsigned long long)a1;
- (void)performCoreSearchQuery:(struct shared_ptr<mlcore::LocalizedSearchQuery> { struct LocalizedSearchQuery *x0; struct __shared_weak_count *x1; })a0 withCompletion:(id /* block */)a1;

@end
