@class NSString;

@interface ATXHeroEntry : NSObject

@property (readonly, nonatomic) unsigned long long adamId;
@property (readonly, copy, nonatomic) NSString *urlHash;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } location;
@property (readonly, nonatomic) unsigned long long radiusInMeters;
@property (readonly, nonatomic) unsigned long long rank;
@property (readonly, nonatomic) BOOL isTouristApp;
@property (readonly, copy, nonatomic) NSString *poiCategory;

- (BOOL)isEqualToAppAndClipEntry:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)heroAppDataForLocation:(id)a0;
- (id)initWithAdamId:(unsigned long long)a0 urlHash:(id)a1 location:(struct CLLocationCoordinate2D { double x0; double x1; })a2 radiusInMeters:(unsigned long long)a3 rank:(unsigned long long)a4 isTouristApp:(BOOL)a5 poiCategory:(id)a6;

@end
