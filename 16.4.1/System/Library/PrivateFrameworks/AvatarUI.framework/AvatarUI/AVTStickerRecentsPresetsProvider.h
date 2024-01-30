@interface AVTStickerRecentsPresetsProvider : NSObject

+ (void)filteredAndPaddedStickerRecordsWithRecents:(id)a0 paddingMemojiIdentifier:(id)a1 avatarStore:(id)a2 numberOfStickers:(long long)a3 resultBlock:(id /* block */)a4;
+ (id)filteredRecentStickers:(id)a0 withAvailableRecordIdentifiersMap:(id)a1;
+ (id)paddedStickerRecordsWithRecents:(id)a0 paddingMemojiIdentifier:(id)a1 numberOfStickers:(long long)a2;
+ (id)presetsGivenNoMemoji;
+ (id)presetsGivenOneMemojiWithIdentifier:(id)a0;

@end
