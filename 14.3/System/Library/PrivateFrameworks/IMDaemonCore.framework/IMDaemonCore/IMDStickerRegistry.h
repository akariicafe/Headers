@class NSMutableDictionary;

@interface IMDStickerRegistry : NSObject

@property (retain) NSMutableDictionary *stickerPackGUIDToPackMap;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)retrieveStickerWithProperties:(id)a0 completionBlock:(id /* block */)a1;
- (id)_cachedPathForStickerWithProperties:(id)a0;
- (BOOL)_isRecipeBasedSticker:(id)a0;

@end
