@class NSString;

@interface _MUETAConfiguration : NSObject

@property (copy, nonatomic) NSString *symbolName;
@property (copy, nonatomic) NSString *etaString;

+ (id)rerouteConfigurationETAStringForTravelTime:(double)a0;
+ (id)configurationForEtaStringFor:(unsigned long long)a0 travelTime:(double)a1 hasSecondaryController:(BOOL)a2 isStackingButtons:(BOOL)a3;

- (void).cxx_destruct;

@end
