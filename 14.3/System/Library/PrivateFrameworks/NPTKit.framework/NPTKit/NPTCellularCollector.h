@class NSString, CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSArray, NSMutableDictionary, NSDictionary, CTDataStatus, NSMutableArray, NSNumber;

@interface NPTCellularCollector : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate>

@property (retain, nonatomic) CoreTelephonyClient *ctClient;
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *context;
@property (retain, nonatomic) NSNumber *slotID;
@property (retain, nonatomic) CTDataStatus *dataStatus;
@property (retain, nonatomic) NSMutableArray *mutableCellChanges;
@property (retain, nonatomic) NSMutableArray *mutableDataStatusChanges;
@property (retain, nonatomic) NSMutableDictionary *servingCellInfo;
@property (retain, nonatomic) NSMutableDictionary *mutableMetadata;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSArray *cellChanges;
@property (retain, nonatomic) NSArray *dataStatusChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getPreferredDataSlot;
+ (id)cellularCollectorForPreferredDataSlot;

- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (void)cellChanged:(id)a0 cell:(id)a1;
- (void).cxx_destruct;
- (id)initWithSlotID:(id)a0;
- (id)dualSimStatus;
- (id)getCellInfoForSlot:(id)a0;
- (id)signalStrengthMeasurements;
- (void)refreshMetadataWithCompletion:(id /* block */)a0;

@end
