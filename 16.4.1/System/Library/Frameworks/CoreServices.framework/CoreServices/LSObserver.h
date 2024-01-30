@class NSOperationQueue, NSString;
@protocol LSObserverDelegate, NSObject;

@interface LSObserver : NSObject {
    id<LSObserverDelegate> _delegate;
    NSOperationQueue *_queue;
    id<NSObject> _changeObserver;
    unsigned char _observing : 1;
}

@property (weak) id<LSObserverDelegate> delegate;
@property (retain) NSOperationQueue *queue;
@property (copy) NSString *name;

+ (void)initialize;

- (void)stopObserving;
- (void)startObserving;
- (id)debugDescription;
- (void)dealloc;
- (void)_configureCallbacks;
- (void)_tearDownCallbacks;
- (id)description;
- (void).cxx_destruct;

@end
