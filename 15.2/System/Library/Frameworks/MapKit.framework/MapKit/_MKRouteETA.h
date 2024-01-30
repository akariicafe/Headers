@interface _MKRouteETA : NSObject

@property (nonatomic) int status;
@property (nonatomic) double distance;
@property (nonatomic) double travelTime;
@property (nonatomic) unsigned long long transportType;
@property (readonly, nonatomic) double responseTime;

+ (id)routeETAWithDistance:(double)a0 travelTime:(double)a1 transportType:(unsigned long long)a2;
+ (id)routeETAWithDistance:(double)a0 travelTime:(double)a1 transportType:(unsigned long long)a2 status:(int)a3;

@end
