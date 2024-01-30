@interface _NAUIAutoUpdatingFontObserver : NSObject {
    id _notificationObserver;
}

@property (readonly, weak, nonatomic) id target;

+ (BOOL)canObserveFontsForTarget:(id)a0;

- (id)initWithTarget:(id)a0;
- (void)updateDyamicFontForCurrentContentSize;
- (void)dealloc;
- (void).cxx_destruct;

@end
