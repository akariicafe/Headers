@class NSString, NSMutableDictionary, NSMapTable, NTKFaceCollection;

@interface NTKComplicationControllerCache : NSObject <NTKFaceObserver, NTKFaceCollectionObserver> {
    NSMutableDictionary *_controllers;
    NSMutableDictionary *_controllersToOwningFace;
    NSMapTable *_faceToLegacyControllers;
    NTKFaceCollection *_libraryCollection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_purge;
- (void)faceCollectionDidLoad:(id)a0;
- (void)faceCollection:(id)a0 didAddFace:(id)a1 atIndex:(unsigned long long)a2;
- (void)faceCollection:(id)a0 didRemoveFace:(id)a1 atIndex:(unsigned long long)a2;
- (void)setLibraryCollection:(id)a0;
- (void)faceConfigurationDidChange:(id)a0;
- (void)_removeComplicationsForFace:(id)a0;
- (void)_addComplicationsForFace:(id)a0;
- (void)_updateComplicationsForFace:(id)a0;
- (id)controllerForComplication:(id)a0 family:(long long)a1 face:(id)a2 create:(id /* block */)a3;
- (id)legacyControllerForComplication:(id)a0 face:(id)a1 slot:(id)a2 create:(id /* block */)a3;

@end
