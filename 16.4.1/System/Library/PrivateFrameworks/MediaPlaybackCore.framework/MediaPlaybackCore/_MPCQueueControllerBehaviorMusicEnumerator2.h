@class MPCQueueControllerBehaviorMusicIdentifierComponents, _MPCQueueControllerEnumerator2;

@interface _MPCQueueControllerBehaviorMusicEnumerator2 : NSEnumerator {
    MPCQueueControllerBehaviorMusicIdentifierComponents *_startingComponents;
    MPCQueueControllerBehaviorMusicIdentifierComponents *_repeatOneComponents;
    long long _repeatIteration;
}

@property (readonly, nonatomic) _MPCQueueControllerEnumerator2 *queueEnumerator;

- (id)nextObject;
- (void).cxx_destruct;
- (id)_loadingComponentsForHeadOfSection:(id)a0;
- (id)initWithQueueEnumerator:(id)a0 startingComponents:(id)a1;

@end
