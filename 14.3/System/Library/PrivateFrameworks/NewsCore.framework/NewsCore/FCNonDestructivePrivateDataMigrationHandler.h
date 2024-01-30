@class NSArray;
@protocol FCNonDestructivePrivateDataActionProvider;

@interface FCNonDestructivePrivateDataMigrationHandler : NSObject

@property (retain, nonatomic) id<FCNonDestructivePrivateDataActionProvider> privateDataActionProvider;
@property (copy, nonatomic) NSArray *privateDataControllers;
@property (nonatomic, getter=isPrivateDataSyncingEnabled) BOOL privateDataSyncingEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPrivateDataActionProvider:(id)a0 privateDataControllers:(id)a1 privateDataSyncingEnabled:(BOOL)a2;
- (void)handleMigration;

@end
