@class UIHBLongClickGestureRecognizer, SBSystemGestureManager, UIHBClickGestureRecognizer;

@interface SBHomeHardwareButtonGestureRecognizerConfiguration : NSObject

@property (retain, nonatomic) SBSystemGestureManager *systemGestureManager;
@property (retain, nonatomic) UIHBClickGestureRecognizer *initialButtonDownGestureRecognizer;
@property (retain, nonatomic) UIHBClickGestureRecognizer *initialButtonUpGestureRecognizer;
@property (retain, nonatomic) UIHBClickGestureRecognizer *singlePressUpGestureRecognizer;
@property (retain, nonatomic) UIHBClickGestureRecognizer *acceleratedSinglePressUpGestureRecognizer;
@property (retain, nonatomic) UIHBLongClickGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) UIHBClickGestureRecognizer *doublePressDownGestureRecognizer;
@property (retain, nonatomic) UIHBClickGestureRecognizer *doublePressUpGestureRecognizer;
@property (retain, nonatomic) UIHBClickGestureRecognizer *triplePressUpGestureRecognizer;
@property (retain, nonatomic) UIHBClickGestureRecognizer *doubleTapUpGestureRecognizer;
@property (readonly, nonatomic) BOOL shouldConfigureDependencies;

- (void).cxx_destruct;

@end
