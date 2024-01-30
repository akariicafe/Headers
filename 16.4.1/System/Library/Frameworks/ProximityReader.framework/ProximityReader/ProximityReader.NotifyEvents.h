@interface ProximityReader.NotifyEvents : NSObject {
    void /* unknown type, empty encoding */ notifyInterface;
}

+ (id)makeNotifer;

- (id)init;
- (void).cxx_destruct;
- (BOOL)handleIncomingCall;

@end
