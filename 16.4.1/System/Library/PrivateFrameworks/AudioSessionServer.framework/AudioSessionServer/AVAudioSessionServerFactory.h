@interface AVAudioSessionServerFactory : NSObject

+ (id)createServerWithDelegate:(id)a0 audioControlQueue:(id)a1;
+ (id)createServer;
+ (id)createServerWithAudioControlQueue:(id)a0 delegate:(id)a1;

@end
