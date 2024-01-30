@class NSString;

@interface _IMNotificationObservationHelper : NSObject {
    id _observer;
    id _object;
    id /* block */ _block;
    NSString *_name;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)_notification:(id)a0;
- (id)initWithObserver:(id)a0 name:(id)a1 object:(id)a2 block:(id /* block */)a3;

@end
