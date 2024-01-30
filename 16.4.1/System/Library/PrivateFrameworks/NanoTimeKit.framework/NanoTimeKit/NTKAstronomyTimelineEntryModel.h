@class CLLocation, NSDate;

@interface NTKAstronomyTimelineEntryModel : NTKTimelineEntryModel

@property (readonly, nonatomic) unsigned long long vista;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) CLLocation *currentLocation;
@property (readonly, nonatomic) CLLocation *anyLocation;

- (void).cxx_destruct;
- (id)_graphicRectangular;
- (id)initWithVista:(unsigned long long)a0 entryDate:(id)a1 currentDate:(id)a2 currentLocation:(id)a3 anyLocation:(id)a4;
- (id)templateForComplicationFamily:(long long)a0;

@end
