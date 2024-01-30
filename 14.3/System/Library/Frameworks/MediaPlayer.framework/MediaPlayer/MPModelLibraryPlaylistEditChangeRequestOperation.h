@class MPModelLibraryPlaylistEditChangeRequest;

@interface MPModelLibraryPlaylistEditChangeRequestOperation : MPAsyncOperation

@property (copy, nonatomic) MPModelLibraryPlaylistEditChangeRequest *request;
@property (copy, nonatomic) id /* block */ localPersistenceResponseHandler;
@property (copy, nonatomic) id /* block */ completeResponseHandler;

+ (id)requiredPlaylistEntryProperties;

- (void).cxx_destruct;
- (void)execute;
- (BOOL)_isCloudLibraryEnabled;

@end
