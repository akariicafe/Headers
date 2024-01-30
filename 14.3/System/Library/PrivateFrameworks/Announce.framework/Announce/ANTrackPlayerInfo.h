@class AVAudioPlayer, NSString;

@interface ANTrackPlayerInfo : NSObject

@property (readonly, nonatomic) AVAudioPlayer *player;
@property (readonly, nonatomic) NSString *announcementID;
@property (readonly, nonatomic) long long trackType;

- (void).cxx_destruct;
- (id)initWithPlayer:(id)a0 announcementID:(id)a1 trackType:(long long)a2;

@end
