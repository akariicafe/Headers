@interface HerculesMappings : NSObject

+ (id)addBalancesFromVC:(id)a0 withTransceiver:(id)a1 forCity:(id)a2 withError:(id *)a3;
+ (id)getStationCode:(id)a0 withTransitInformation:(id)a1 forCity:(id)a2;
+ (id)getStationMode:(id)a0 forCity:(id)a1;
+ (id)getTransitModality:(id)a0 forCity:(id)a1;
+ (id)mergeTaps:(id)a0 forCity:(id)a1 outEnRoute:(id *)a2;
+ (id)processEnRouteStatus:(id)a0 forTransitInformation:(id)a1 forCity:(id)a2;
+ (BOOL)supportsPlasticCardMode:(id)a0;

@end
