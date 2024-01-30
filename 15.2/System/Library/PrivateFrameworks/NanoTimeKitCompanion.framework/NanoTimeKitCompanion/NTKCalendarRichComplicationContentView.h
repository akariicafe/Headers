@class UIColor, NSArray, NTKColoringLabel, NTKPillView, CLKDevice;

@interface NTKCalendarRichComplicationContentView : UIView

@property (readonly, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NTKPillView *verticalPill;
@property (retain, nonatomic) NTKPillView *verticalPill2;
@property (retain, nonatomic) NTKColoringLabel *headerLabel;
@property (retain, nonatomic) NTKColoringLabel *bodyLabel;
@property (retain, nonatomic) NTKColoringLabel *body2Label;
@property (retain, nonatomic) NSArray *pillAlignedToBody1BottomConstraints;
@property (retain, nonatomic) NSArray *pillAlignedToBody2BottomConstraints;
@property (retain, nonatomic) NSArray *conflictEventsPillAlignmentConstraints;
@property (retain, nonatomic) NSArray *conflictEventsPill2AlignmentConstraints;
@property (retain, nonatomic) NSArray *noPillConstraints;
@property (retain, nonatomic) UIColor *firstEventColor;
@property (retain, nonatomic) NSArray *otherEventColors;
@property (nonatomic) unsigned long long eventCount;
@property (nonatomic) BOOL hasConflicts;

- (void)updateLayout;
- (void).cxx_destruct;
- (id)initForDevice:(id)a0;

@end
