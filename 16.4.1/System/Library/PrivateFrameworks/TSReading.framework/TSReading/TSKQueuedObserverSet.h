@interface TSKQueuedObserverSet : NSObject {
    int mChangeType;
    id mObserver;
    id mChangeSource;
    BOOL mIsClass;
}

+ (id)queuedObserverSetWithChangeType:(int)a0 observer:(id)a1 changeSource:(id)a2 isClass:(BOOL)a3;

- (void)dealloc;

@end
