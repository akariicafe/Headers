@interface IMPhotoAttachmentStatusChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) unsigned long long numberOfPhotos;
@property (readonly, nonatomic) unsigned long long numberOfVideos;
@property (readonly, nonatomic) unsigned long long numberOfSavedAssets;

+ (id)_guidForItem:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isFromMe;
- (id)_initWithItem:(id)a0 numberOfPhotos:(unsigned long long)a1 numberOfVideos:(unsigned long long)a2 numberOfSavedAssets:(unsigned long long)a3;
- (BOOL)_isEqualToGuid:(id)a0 numberOfPhotos:(unsigned long long)a1 numberOfVideos:(unsigned long long)a2 numberOfSavedAssets:(unsigned long long)a3;
- (BOOL)wouldBeEqualIfInitializedWithItem:(id)a0 numberOfPhotos:(unsigned long long)a1 numberOfVideos:(unsigned long long)a2 numberOfSavedAssets:(unsigned long long)a3;

@end
