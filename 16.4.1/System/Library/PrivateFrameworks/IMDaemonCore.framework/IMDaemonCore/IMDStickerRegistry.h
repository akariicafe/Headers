@class NSMutableDictionary;

@interface IMDStickerRegistry : NSObject

@property (retain) NSMutableDictionary *stickerPackGUIDToPackMap;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)_cachedPathForStickerWithProperties:(id)a0;
- (BOOL)_isRecipeBasedSticker:(id)a0;
- (void)retrieveStickerWithProperties:(id)a0 completionBlock:(id /* block */)a1;

@end
