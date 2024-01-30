@class NSUUID, NSData, NSString;

@interface HDFitnessMachineSimulatorSupport : NSObject

@property (readonly, nonatomic) unsigned long long fitnessMachineType;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSData *btIdentifierData;
@property (readonly, nonatomic) NSString *btIdentifier;

- (void).cxx_destruct;
- (id)initWithFitnessMachineType:(unsigned long long)a0;
- (void)updateAdvertisementDataForSimulation:(id)a0;

@end
