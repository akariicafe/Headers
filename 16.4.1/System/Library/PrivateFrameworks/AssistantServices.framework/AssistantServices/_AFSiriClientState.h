@class NSMutableSet;

@interface _AFSiriClientState : NSObject {
    NSMutableSet *_requestUUIDs;
}

@property (nonatomic) BOOL hasActiveSession;
@property (nonatomic) BOOL isListening;
@property (nonatomic) BOOL isSpeaking;
@property (readonly, nonatomic) unsigned long long notifyState;

- (void)addRequestUUID:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeRequestUUID:(id)a0;

@end
