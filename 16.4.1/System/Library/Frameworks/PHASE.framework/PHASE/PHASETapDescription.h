@class NSString, AVAudioFormat, NSMutableString;

@interface PHASETapDescription : NSObject {
    NSMutableString *_uidString;
}

@property (readonly, nonatomic) NSString *uidString;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long binding;
@property (readonly, nonatomic) long long streamType;
@property (readonly, nonatomic) unsigned int audioSessionToken;
@property (readonly, nonatomic) NSString *sceneIdentifier;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) AVAudioFormat *format;

- (void).cxx_destruct;
- (id)initInternalWithType:(long long)a0;
- (id)initScreenSharingTapOfType:(long long)a0;
- (id)initSystemTapOfType:(long long)a0;
- (id)initWithAudioSessionToken:(unsigned int)a0 tapType:(long long)a1;
- (id)initWithProcessIdentifier:(int)a0 tapType:(long long)a1;
- (id)initWithSceneIdentifier:(id)a0 tapType:(long long)a1;
- (id)initWithStreamType:(long long)a0 tapType:(long long)a1;

@end
