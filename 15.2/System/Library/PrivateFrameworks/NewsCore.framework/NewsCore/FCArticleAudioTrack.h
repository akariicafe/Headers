@class FCContentArchive, FCAVAsset;

@interface FCArticleAudioTrack : NSObject <NSCopying, FCContentArchivable>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) FCAVAsset *asset;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double embeddedUpsellStartTime;
@property (readonly, nonatomic) double embeddedUpsellEndTime;
@property (readonly, nonatomic) FCContentArchive *contentArchive;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 asset:(id)a1 duration:(double)a2;
- (id)initWithType:(long long)a0 asset:(id)a1 duration:(double)a2 embeddedUpsellStartTime:(double)a3 embeddedUpsellEndTime:(double)a4;
- (unsigned long long)hash;

@end
