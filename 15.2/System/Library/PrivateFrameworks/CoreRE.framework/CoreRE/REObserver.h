@class NSString, NSUserDefaults;

@interface REObserver : NSObject

@property (nonatomic) void /* function */ *observerCallback;
@property (retain, nonatomic) NSUserDefaults *userDefault;
@property (retain, nonatomic) NSString *path;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
