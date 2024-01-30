@interface PRSFTETask : NSObject <PRSTriggerTask>

@property (copy) id /* block */ reply;

- (void).cxx_destruct;
- (id)initWithReply:(id /* block */)a0;
- (BOOL)needsBag;
- (void)triggerQuery:(BOOL)a0;
- (BOOL)allowLocation;

@end
