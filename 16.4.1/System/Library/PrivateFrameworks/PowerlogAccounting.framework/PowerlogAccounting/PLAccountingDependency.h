@class PLAccountingRange, NSMutableSet, NSDate, NSNumber;
@protocol PLAccountingDependencyManager;

@interface PLAccountingDependency : NSObject

@property (retain, nonatomic) NSMutableSet *observingOwnerIDs;
@property (weak) id<PLAccountingDependencyManager> manager;
@property (retain, nonatomic) NSNumber *ID;
@property (retain, nonatomic) PLAccountingRange *range;
@property (retain, nonatomic) NSDate *activationDate;

- (void)deactivate;
- (void)activate;
- (id)description;
- (void).cxx_destruct;
- (void)didReceiveOwner:(id)a0;
- (void)updateWithEndDate:(id)a0;

@end
