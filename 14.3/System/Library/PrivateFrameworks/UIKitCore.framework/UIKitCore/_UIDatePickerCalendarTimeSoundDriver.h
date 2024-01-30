@class UISelectionFeedbackGenerator;
@protocol UICoordinateSpace;

@interface _UIDatePickerCalendarTimeSoundDriver : NSObject {
    struct { unsigned char soundEnabled : 1; } _flags;
}

@property (nonatomic) long long highlightedValue;
@property (nonatomic) long long selectedValue;
@property (retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator;
@property (weak, nonatomic) id<UICoordinateSpace> coordinateSpace;

- (void)warmUp;
- (id)initWithCoordinateSpace:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)playHighlightSound;
- (void)playSnappingSound;
- (void)updateWithSnapped;
- (void)updateWithHighlightedValue:(long long)a0;
- (void)performWithoutSounds:(id /* block */)a0;
- (void)coolDown;

@end
