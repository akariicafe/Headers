@interface CHTextInputProtoSettings : NSObject

@property (readonly, nonatomic) BOOL isScribbleActive;
@property (readonly, nonatomic) BOOL autoLineBreakEnabled;
@property (readonly, nonatomic) BOOL autoLineBreakRequireWeakCursor;
@property (readonly, nonatomic) double autoLineBreakMinVerticalDistance;
@property (readonly, nonatomic) double autoLineBreakDualBreakVerticalDistance;
@property (readonly, nonatomic) double autoLineBreakAreaWidthFactor;
@property (readonly, nonatomic) BOOL lineBreakVerticalBarGestureEnabled;
@property (readonly, nonatomic) BOOL lineBreakVerticalBarUpToDelete;
@property (readonly, nonatomic) double subwordGestureEndingSpeedRange;
@property (readonly, nonatomic) double subwordGestureSpeedThreshold;
@property (readonly, nonatomic) BOOL preventLeftoverCharsInSubwordGestures;

+ (id)sharedSettings;

@end
