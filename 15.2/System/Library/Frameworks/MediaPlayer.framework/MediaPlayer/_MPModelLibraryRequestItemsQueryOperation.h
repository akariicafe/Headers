@class MPMediaLibraryView;

@interface _MPModelLibraryRequestItemsQueryOperation : MPAsyncOperation

@property (retain, nonatomic) MPMediaLibraryView *libraryView;
@property (nonatomic) struct shared_ptr<mlcore::Query> { struct Query *__ptr_; struct __shared_weak_count *__cntrl_; } query;
@property (copy, nonatomic) id /* block */ resultHandler;

- (void)execute;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
