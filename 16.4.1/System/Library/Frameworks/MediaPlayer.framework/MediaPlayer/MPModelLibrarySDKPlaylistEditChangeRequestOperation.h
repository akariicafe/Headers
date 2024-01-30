@class NSOperationQueue;

@interface MPModelLibrarySDKPlaylistEditChangeRequestOperation : MPModelLibraryPlaylistEditChangeRequestOperation {
    NSOperationQueue *_operationQueue;
}

- (void)execute;
- (void).cxx_destruct;
- (void)_executeWithCloudLibraryEnabledConfirmed;

@end
