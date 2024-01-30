@class NSString;

@interface ATXHeuristicAirportCity : NSObject

@property (readonly, nonatomic) NSString *iata;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *isoLanguage;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;

+ (id)supportedLanguages;
+ (id)cityForAirport:(id)a0;
+ (id)cityForAirport:(id)a0 language:(id)a1;

- (void).cxx_destruct;

@end
