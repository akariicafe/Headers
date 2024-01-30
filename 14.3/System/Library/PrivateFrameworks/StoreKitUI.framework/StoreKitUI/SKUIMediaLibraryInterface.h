@class NSString;

@interface SKUIMediaLibraryInterface : NSObject <SKUILibraryInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeMediaItemsForLibraryItems:(id)a0;
- (id)stateForLibraryItem:(id)a0;
- (BOOL)performActionForLibraryItem:(id)a0;
- (id)exposedPlatformItemKinds;
- (void)enumerateStatesForLibraryItems:(id)a0 usingBlock:(id /* block */)a1;
- (id)_newDefaultQuery;
- (long long)_availabilityForMediaItem:(id)a0;
- (unsigned long long)_AVTypesForMediaItem:(id)a0;
- (id)_storePlatformKindForMediaItem:(id)a0;
- (void)_restrictQueryToLocalContent:(id)a0;
- (BOOL)isItemLocalAudiobook:(id)a0;

@end
