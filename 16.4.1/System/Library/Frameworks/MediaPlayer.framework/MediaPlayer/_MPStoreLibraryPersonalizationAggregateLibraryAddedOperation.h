@class MPMediaLibraryView;

@interface _MPStoreLibraryPersonalizationAggregateLibraryAddedOperation : MPAsyncOperation

@property (nonatomic) MPMediaLibraryView *libraryView;
@property (nonatomic) struct vector<long long, std::allocator<long long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long long *, std::allocator<long long>> { long long *__value_; } __end_cap_; } persistentIDs;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
