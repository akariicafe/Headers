@class NSMutableDictionary, PLAccountingRange, NSMutableSet, NSDate, NSNumber, NSString;
@protocol PLAccountingOwnerManager;

@interface PLAccountingOwner : NSObject <PLAccountingDependencyOwner>

@property (retain, nonatomic) NSMutableSet *observingDependencyIDs;
@property (retain, nonatomic) NSMutableDictionary *dependencyIDToDependenciesInRange;
@property (weak) id<PLAccountingOwnerManager> manager;
@property (retain, nonatomic) NSNumber *ID;
@property (retain, nonatomic) PLAccountingRange *range;
@property (retain, nonatomic) NSDate *activationDate;
@property (retain, nonatomic) NSDate *runDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void).cxx_destruct;
- (void)allRun;
- (BOOL)hasRun;
- (void)addDependency:(id)a0;
- (void)activate;
- (void)deactivate;
- (void)didReceiveDependency:(id)a0;

@end
