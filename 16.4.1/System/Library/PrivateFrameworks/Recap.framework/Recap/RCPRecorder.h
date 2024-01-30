@class RCPEventAction, NSMutableSet;

@interface RCPRecorder : NSObject {
    struct __CFRunLoop { } *_ioRunLoop;
    NSMutableSet *_activeRecorders;
}

@property BOOL shouldRecordSenderProperties;
@property BOOL shouldRecordInitialPointerLocation;
@property (retain) RCPEventAction *pointerLocationAction;

+ (id)sharedRecorder;
+ (void)registerEventStreamRecorder:(id)a0;
+ (BOOL)shouldRecordSenderProperties;
+ (void)unregisterEventStreamRecorder:(id)a0;

- (void).cxx_destruct;
- (id)eventPreActions;
- (void)_registerIOHIDClient;
- (void)_unregisterIOHIDClient;

@end
