@class NSError, HFUpdateLogger, NSMutableDictionary, NSDictionary, NSObject, NSMutableSet, HFMutableAggregatedCharacteristicReadPolicy, NSMutableArray, NAFuture;
@protocol OS_dispatch_group;

@interface HFCharacteristicValueTransaction : NSObject

@property (retain, nonatomic) HFMutableAggregatedCharacteristicReadPolicy *readPolicy;
@property (retain, nonatomic) NSMutableSet *characteristicsToRead;
@property (retain, nonatomic) NSMutableSet *writeCharacteristicRequests;
@property (retain, nonatomic) NSMutableSet *actionSetsToExecute;
@property (retain, nonatomic) NSMutableSet *actionsToExecute;
@property (retain, nonatomic) NSDictionary *actionSetErrorsKeyedByUUID;
@property (retain, nonatomic) NSError *actionsError;
@property (retain, nonatomic) NSError *overallReadError;
@property (retain, nonatomic) NSError *overallWriteError;
@property (retain, nonatomic) NSMutableDictionary *readFuturesKeyedByCharacteristicIdentifier;
@property (retain, nonatomic) NSMutableDictionary *writeFuturesKeyedByCharacteristicIdentifier;
@property (retain, nonatomic) NAFuture *commitFuture;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *onFinishGroup;
@property (retain, nonatomic) NSMutableArray *clientReasonsStack;
@property (retain, nonatomic) HFUpdateLogger *logger;
@property (nonatomic) BOOL loggerIsExternal;

- (id)init;
- (void).cxx_destruct;
- (id)executionErrorForActionSet:(id)a0;

@end
