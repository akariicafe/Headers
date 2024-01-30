@class NSString, JFXCompositionPlayer;

@interface JFXCompositionPlayerRequest : NSObject

@property (readonly, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) double queuedTime;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak) JFXCompositionPlayer *player;
@property (readonly, nonatomic) unsigned long long signPostID;

+ (id)stringFromRequestType:(unsigned long long)a0;

- (void)didBegin;
- (void)didCancel;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBlock:(id /* block */)a0 ofType:(unsigned long long)a1;
- (void)didEnqueue;
- (void)didComplete;

@end
