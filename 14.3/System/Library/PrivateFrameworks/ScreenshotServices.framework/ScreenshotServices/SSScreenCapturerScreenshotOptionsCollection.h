@class NSMapTable;

@interface SSScreenCapturerScreenshotOptionsCollection : NSObject {
    NSMapTable *_screenToScreenshotOptions;
}

- (void).cxx_destruct;
- (void)setScreenshotOptions:(id)a0 forScreen:(id)a1;
- (id)screenshotOptionsForScreen:(id)a0;

@end
