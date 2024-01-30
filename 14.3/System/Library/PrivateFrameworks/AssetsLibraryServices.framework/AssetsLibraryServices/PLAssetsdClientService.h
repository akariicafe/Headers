@class NSString, NSMutableArray;

@interface PLAssetsdClientService : NSObject <PLAssetsdClientServiceProtocol> {
    NSMutableArray *_libraryUnavailabilityHandlers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addPhotoLibraryUnavailabilityHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)assetAvailableForIdentifier:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)downloadStatusForIdentifier:(id)a0 progress:(double)a1 completed:(BOOL)a2 data:(id)a3 error:(id)a4;
- (void)libraryBecameUnavailable:(id)a0 reason:(id)a1;

@end
