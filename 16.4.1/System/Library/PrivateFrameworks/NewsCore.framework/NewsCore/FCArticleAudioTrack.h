@class FCContentArchive, FCAVAsset;

@interface FCArticleAudioTrack : NSObject <NSCopying, FCContentArchivable>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) FCAVAsset *asset;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double embeddedUpsellStartTime;
@property (readonly, nonatomic) double embeddedUpsellEndTime;
@property (readonly, nonatomic) FCContentArchive *contentArchive;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 asset:(id)a1 duration:(double)a2 embeddedUpsellStartTime:(double)a3 embeddedUpsellEndTime:(double)a4;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 asset:(id)a1 duration:(double)a2;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;

@end
