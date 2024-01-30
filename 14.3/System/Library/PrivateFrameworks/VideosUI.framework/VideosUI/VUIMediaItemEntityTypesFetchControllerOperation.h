@class VUIMediaItemEntityTypesFetchControllerResult, VUIMediaItemEntityTypesFetchResponse;

@interface VUIMediaItemEntityTypesFetchControllerOperation : VUIMediaLibraryOperation

@property (nonatomic) long long fetchReason;
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchControllerResult *result;
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *currentFetchResponse;

+ (id)_changeSetFromMediaItemEntityTypes:(id)a0 toMediaItemEntityTypes:(id)a1;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)initWithMediaLibrary:(id)a0;
- (id)initWithMediaLibrary:(id)a0 fetchReason:(long long)a1;

@end
