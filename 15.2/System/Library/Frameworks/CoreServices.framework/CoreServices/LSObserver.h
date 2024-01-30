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
- (void)_tearDownCallbacks;
- (void)_configureCallbacks;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;

@end
