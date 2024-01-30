@class NSString;

@interface SKUIMediaLibraryInterface : NSObject <SKUILibraryInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_storePlatformKindForMediaItem:(id)a0;
- (unsigned long long)_AVTypesForMediaItem:(id)a0;
- (long long)_availabilityForMediaItem:(id)a0;
- (id)_newDefaultQuery;
- (void)_restrictQueryToLocalContent:(id)a0;
- (void)enumerateStatesForLibraryItems:(id)a0 usingBlock:(id /* block */)a1;
- (id)exposedPlatformItemKinds;
- (BOOL)isItemLocalAudiobook:(id)a0;
- (BOOL)performActionForLibraryItem:(id)a0;
- (void)removeMediaItemsForLibraryItems:(id)a0;
- (id)stateForLibraryItem:(id)a0;

@end
