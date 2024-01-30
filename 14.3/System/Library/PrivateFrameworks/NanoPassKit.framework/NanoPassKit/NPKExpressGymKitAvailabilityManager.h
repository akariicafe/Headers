@class NSString, PKPaymentPass;
@protocol NPKExpressGymKitAvailabilityManagerDelegate;

@interface NPKExpressGymKitAvailabilityManager : NSObject <NPKExpressGymKitConflictResolver> {
    int _notificationToken;
}

@property (readonly, nonatomic) BOOL isExpressGymKitAllowed;
@property (readonly, nonatomic) PKPaymentPass *conflictingPass;
@property (weak, nonatomic) id<NPKExpressGymKitAvailabilityManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (id)_conflictingPassUniqueID;
- (void)allowEnableExpressGymKitWithVisibleViewController:(id)a0 completion:(id /* block */)a1;

@end
