@interface CDPUtilities : NSObject

@property (class, readonly) BOOL hasFullCDPSupport;
@property (class, readonly) BOOL isInternalBuild;
@property (class, readonly) BOOL isMultiUserManateeFeatureEnabled;
@property (class, readonly) BOOL canEnableMultiUserManatee;
@property (class, readonly, nonatomic) BOOL isSilentEscrowRecordViabilityRepairEnabled;

@end
