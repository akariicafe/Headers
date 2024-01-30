@class NSMutableSet;

@interface SESSessionManager : NSObject <SESSessionManagerDelegate>

@property (retain) NSMutableSet *sessions;

+ (id)sharedInstance;

- (void)sessionDidEnd:(id)a0;
- (void).cxx_destruct;
- (void)connectionDidInvalidate;
- (id)startDigitalCarKeySessionWithOptions:(id)a0 startCallback:(id /* block */)a1;

@end
