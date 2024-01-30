@class DTTapConfig;

@interface DTTapMessageHandler : NSObject

@property (readonly, retain, nonatomic) DTTapConfig *config;

- (void)stop;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)messageReceived:(id)a0;

@end
