@class NSMapTable;

@interface _UIFocusStateObserver : NSObject {
    NSMapTable *_observers;
    struct { unsigned char wasActive : 1; } _flags;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;

- (id)descriptionBuilder;
- (id)addObserver:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)notifyObserversIfNecessary;

@end
