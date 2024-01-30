@class NSArray, NSDictionary;

@interface WCAFetchWiFiBehaviorParameters : NSObject

@property (retain, nonatomic) NSArray *internalSSIDs;
@property (retain, nonatomic) NSDictionary *disabledMacRandomizationVersions;
@property (retain, nonatomic) NSDictionary *softErrors;
@property (retain, nonatomic) NSDictionary *datapathTelemetry;
@property (retain, nonatomic) NSDictionary *jtrnDefaults;
@property (retain, nonatomic) NSArray *ambiguousSSIDs;
@property (retain, nonatomic) NSDictionary *apProfile;
@property (retain, nonatomic) NSDictionary *beaconParsing;

+ (void)fetchWiFiBehaviorWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;

@end
