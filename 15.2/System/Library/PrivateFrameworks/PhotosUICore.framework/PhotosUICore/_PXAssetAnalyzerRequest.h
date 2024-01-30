@class PHAsset, NSString;

@interface _PXAssetAnalyzerRequest : NSObject <PXPhotoLibraryUIChangeObserver> {
    id /* block */ _resultHandler;
    BOOL _finished;
}

@property (readonly) PHAsset *asset;
@property (readonly) long long workerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
