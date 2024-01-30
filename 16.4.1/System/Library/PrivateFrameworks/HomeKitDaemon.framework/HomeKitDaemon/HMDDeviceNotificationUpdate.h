@class NSString, NSArray, NSMapTable, NSMutableDictionary, NSMutableArray;

@interface HMDDeviceNotificationUpdate : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_notificationsCompletions;
    NSMapTable *_characteristicUpdateTuples;
    NSMutableDictionary *_updatedMediaPropertiesByMediaProfile;
}

@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) NSString *notificationUpdateID;
@property (readonly, nonatomic) NSArray *completions;
@property (readonly, nonatomic) NSArray *characteristicUpdateTuples;
@property (readonly, nonatomic) NSArray *mediaProperties;

- (id)initWithRequestID:(id)a0;
- (void).cxx_destruct;
- (void)_updateWithNotificationUpdateID:(id)a0 completion:(id /* block */)a1;
- (void)updateWithCharacteristicUpdates:(id)a0 notificationUpdateID:(id)a1 completion:(id /* block */)a2;
- (void)updateWithUpdatedMediaPropertiesByMediaResponses:(id)a0 notificationUpdateID:(id)a1 completion:(id /* block */)a2;

@end
