@class NSString;

@interface ATXAppAndClipEntry : NSObject

@property (readonly, nonatomic) unsigned long long adamId;
@property (readonly, copy, nonatomic) NSString *urlHash;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } location;
@property (readonly, nonatomic) unsigned long long radiusInMeters;
@property (readonly, nonatomic) unsigned long long rank;
@property (readonly, nonatomic) BOOL isTouristApp;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToAppAndClipEntry:(id)a0;
- (id)heroAppPredictionForLocation:(id)a0;
- (id)initWithAdamId:(unsigned long long)a0 urlHash:(id)a1 location:(struct CLLocationCoordinate2D { double x0; double x1; })a2 radiusInMeters:(unsigned long long)a3 rank:(unsigned long long)a4 isTouristApp:(BOOL)a5;
- (BOOL)isEqual:(id)a0;

@end
