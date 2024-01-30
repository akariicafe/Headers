@class UIWindowScene;

@interface UISceneSizeRestrictions : NSObject {
    BOOL _hasAutomaticMinimumSize;
    BOOL _hasAutomaticMaximumSize;
    UIWindowScene *_scene;
}

@property (nonatomic) struct CGSize { double width; double height; } minimumSize;
@property (nonatomic) struct CGSize { double width; double height; } maximumSize;

- (id)_initWithScene:(id)a0;
- (void).cxx_destruct;

@end
