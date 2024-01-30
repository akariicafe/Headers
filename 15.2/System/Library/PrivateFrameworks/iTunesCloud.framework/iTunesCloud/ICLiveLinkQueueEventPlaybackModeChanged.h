@interface ICLiveLinkQueueEventPlaybackModeChanged : NSObject

@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) id /* block */ shuffleType;
@property (readonly, nonatomic) id /* block */ repeatType;
@property (readonly, nonatomic) id /* block */ autoPlayEnabled;

- (id)description;
- (void).cxx_destruct;
- (id)initWithUpdatedShuffleType:(long long)a0;
- (id)initWithUpdatedRepeatType:(long long)a0;
- (id)initWithUpdatedAutoPlayEnabled:(BOOL)a0;

@end
