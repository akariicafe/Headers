@class PLTimer, NSString, PLIOKitOperatorComposition, NSData, NSNumber;

@interface PLSmartConnectorAgent : PLAgent

@property (readonly) PLIOKitOperatorComposition *iokitOrion;
@property (retain) PLTimer *timer;
@property (retain) NSNumber *preStatus;
@property (retain) NSNumber *curStatus;
@property (retain) NSString *preName;
@property (retain) NSString *curName;
@property (retain) NSString *preModel;
@property (retain) NSString *curModel;
@property (retain) NSData *preVersion;
@property (retain) NSData *curVersion;

+ (void)load;
+ (id)entryEventForwardDefinitionStatus;
+ (id)entryEventForwardDefinitionEAStatus;
+ (id)entryEventForwardDefinitions;

- (void)externalAccessoryConnected:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)logEventForwardStatus:(id)a0 withName:(id)a1 withModel:(id)a2 andVersionInfo:(id)a3;
- (void)reArmCallback;
- (void)logEventForwardEAAccessory:(id)a0;
- (void)externalAccessoryDisconnected:(id)a0;
- (void)initOperatorDependancies;

@end
