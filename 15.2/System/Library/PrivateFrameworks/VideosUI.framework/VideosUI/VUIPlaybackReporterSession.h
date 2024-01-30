@class NSString, NSMutableDictionary, NSObject;
@protocol TVPPlayback;

@interface VUIPlaybackReporterSession : NSObject {
    NSMutableDictionary *_metadata;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _metadataLock;
}

@property (weak, nonatomic) NSObject<TVPPlayback> *player;
@property (retain, nonatomic) id context;
@property (readonly, nonatomic) NSString *UUID;
@property (nonatomic) BOOL reportingEnabled;

+ (id)transitionTypeForMediaControllerAutoTransition:(id)a0;
+ (id)transitionReasonForMediaControllerStartReason:(id)a0 autoStart:(id)a1;
+ (id)transitionReasonForMediaControllerStopReason:(id)a0 autoStop:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)consumeMetadataForKey:(id)a0;
- (id)consumeStopType;
- (id)consumeStopReason;
- (id)consumeStartType;
- (id)consumeStartReason;
- (id)initWithPlayer:(id)a0 context:(id)a1;
- (void)setMetadata:(id)a0 forKey:(id)a1;
- (id)metadataForKey:(id)a0;

@end
