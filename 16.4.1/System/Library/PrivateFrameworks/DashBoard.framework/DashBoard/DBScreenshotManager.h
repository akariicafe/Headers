@class UIWindowScene;

@interface DBScreenshotManager : NSObject {
    UIWindowScene *_windowScene;
}

- (id)initWithWindowScene:(id)a0;
- (void).cxx_destruct;
- (void)saveScreenshotsForDisplayIdentifiers:(id)a0 completion:(id /* block */)a1;

@end
