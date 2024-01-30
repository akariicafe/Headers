@class CHSWatchComplicationsCurvedLabelMetrics;

@interface CHUISMutableWatchComplicationsWidgetSceneSettings : CHUISMutableWidgetSceneSettings

@property (nonatomic) unsigned long long cornerPosition;
@property (copy, nonatomic) CHSWatchComplicationsCurvedLabelMetrics *curvedLabelMetrics;
@property (nonatomic) struct CGPoint { double x0; double x1; } bezelContentCenter;
@property (nonatomic) BOOL includeAccessoryViews;
@property (nonatomic) BOOL generateSnapshotMetadata;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;

@end
