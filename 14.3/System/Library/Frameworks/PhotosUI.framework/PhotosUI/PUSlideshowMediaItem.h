@class NSString, MPMediaItem, NSURL, OKProducerPreset;

@interface PUSlideshowMediaItem : NSObject {
    MPMediaItem *_mediaItem;
    OKProducerPreset *_preset;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSURL *audioURL;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *localizedName;

+ (id)mediaItemsForOKThemes;
+ (id)mediaItemForType:(long long)a0 uniqueIdentifier:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithType:(long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWitPreset:(id)a0;
- (id)initWitMediaItem:(id)a0;

@end
