@class NSString, NSDictionary, _UITextLayoutController;
@protocol UICoordinateSpace;

@interface _UITextLayoutBaselineCalculator : NSObject <_UITextLayoutBaselineCalculator> {
    _UITextLayoutController *_textLayoutController;
    NSDictionary *_typingAttributes;
    id<UICoordinateSpace> _coordinateSpace;
    double _scale;
}

@property (readonly, nonatomic) double firstBaselineOffsetFromTop;
@property (readonly, nonatomic) double lastBaselineOffsetFromBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
