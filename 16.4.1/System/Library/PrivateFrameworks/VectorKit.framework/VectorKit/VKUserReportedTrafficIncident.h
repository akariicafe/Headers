@interface VKUserReportedTrafficIncident : VKTrafficFeature

@property (readonly, nonatomic) long long type;

- (id)initWithIncidentType:(long long)a0 uniqueIdentifier:(id)a1 position:(struct { double x0; double x1; double x2; })a2 onRoute:(id)a3;

@end
