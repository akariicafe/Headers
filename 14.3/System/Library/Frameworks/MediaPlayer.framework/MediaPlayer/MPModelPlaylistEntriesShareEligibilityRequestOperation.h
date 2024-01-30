@class MPModelPlaylistEntriesShareEligibilityRequest;

@interface MPModelPlaylistEntriesShareEligibilityRequestOperation : MPAsyncOperation

@property (copy, nonatomic) MPModelPlaylistEntriesShareEligibilityRequest *request;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;

@end
