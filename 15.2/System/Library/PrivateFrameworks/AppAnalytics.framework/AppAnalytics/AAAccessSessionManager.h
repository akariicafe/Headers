@interface AAAccessSessionManager : NSObject {
    void /* unknown type, empty encoding */ accessSessionManager;
}

@property (nonatomic, readonly) BOOL isActive;

- (void).cxx_destruct;
- (id)init;
- (void)pushSessionData:(id)a0 traits:(id)a1;
- (void)pushSessionData:(id)a0;
- (void)pushSessionData:(id)a0 submitEventQueues:(BOOL)a1;
- (void)pushSessionData:(id)a0 traits:(id)a1 submitEventQueues:(BOOL)a2;

@end
