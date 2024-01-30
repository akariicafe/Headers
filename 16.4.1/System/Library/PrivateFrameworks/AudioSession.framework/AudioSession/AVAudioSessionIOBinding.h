@class NSArray, AVAudioSession;

@interface AVAudioSessionIOBinding : NSObject

@property (readonly, nonatomic) AVAudioSession *session;
@property (readonly, nonatomic) NSArray *streams;

- (id)description;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (id)initWithSession:(id)a0 streams:(id)a1 error:(id *)a2;

@end
