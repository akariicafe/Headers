@class NSString, MPMediaItem;

@interface MPMusicPlayerControllerNowPlaying : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MPMediaItem *item;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSString *artworkIdentifier;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long count;

+ (id)nowPlayingWithItem:(id)a0 itemIdentifier:(id)a1 artworkIdentifier:(id)a2 index:(long long)a3 count:(long long)a4;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)encodeWithCoder:(id)a0;

@end
