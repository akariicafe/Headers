@class CHSWatchComplicationsCurvedLabelMetrics;

@interface CHUISWatchComplicationsWidgetSceneSettings : CHUISWidgetSceneSettings

@property (readonly, nonatomic) unsigned long long cornerPosition;
@property (readonly, copy, nonatomic) CHSWatchComplicationsCurvedLabelMetrics *curvedLabelMetrics;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } bezelContentCenter;
@property (readonly, nonatomic) BOOL includeAccessoryViews;
@property (readonly, nonatomic) BOOL generateSnapshotMetadata;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;

@end
