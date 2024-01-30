@class NSMutableDictionary;
@protocol PEPhotoKitMediaDestinationDelegate;

@interface PEPhotoKitMediaDestination : PEMediaDestination

@property (readonly, nonatomic, getter=_pendingRequestsByRequestIdentifier) NSMutableDictionary *pendingRequestsByRequestIdentifier;
@property (weak, nonatomic) id<PEPhotoKitMediaDestinationDelegate> delegate;
@property (nonatomic) BOOL applyVideoOrientationAsMetadata;
@property (nonatomic) BOOL crossPlatformSerializationEnabled;

- (void)cancelRequestWithIdentifier:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_fetchUpdatedAssetWithLocalIdentifier:(id)a0 photoLibrary:(id)a1;
- (void)_requestDidFinish:(id)a0;
- (id)_saveEditsForPhoto:(id)a0 saveRequest:(id)a1 completionHandler:(id /* block */)a2;
- (long long)_workImageVersionForContentEditingOutput:(id)a0;
- (void)ensureEditableCopyOfAsset:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isSavingRequestWithIdentifier:(int)a0;
- (double)progressForRequestWithIdentifier:(int)a0;
- (int)revertEditsForAsset:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsProgressForRequestWithIdentifier:(int)a0;
- (int)saveEditsByCopyingAsset:(id)a0 withResourceURL:(id)a1 usingContentEditingOutput:(id)a2 livePhotoState:(unsigned short)a3 completionHandler:(id /* block */)a4;
- (int)saveEditsForAsset:(id)a0 usingContentEditingOutput:(id)a1 livePhotoState:(unsigned short)a2 completionHandler:(id /* block */)a3;
- (int)saveInternalEditsForAsset:(id)a0 usingCompositionController:(id)a1 contentEditingOutput:(id)a2 version:(long long)a3 livePhotoState:(unsigned short)a4 originalComposition:(id)a5 completionHandler:(id /* block */)a6;

@end
