@class NSString, NSMutableArray;

@interface _MSStickerPackCollectionViewDataSource : NSObject <MSStickerBrowserViewDataSource>

@property (readonly, nonatomic) NSMutableArray *stickers;
@property (readonly, nonatomic) long long stickerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_stickerSizeFromString:(id)a0;

- (long long)numberOfStickersInStickerBrowserView:(id)a0;
- (id)stickerBrowserView:(id)a0 stickerAtIndex:(long long)a1;
- (void).cxx_destruct;
- (void)_loadStickerPackWithURL:(id)a0;
- (id)initWithStickerPackURL:(id)a0;
- (id)_allStickers;

@end
