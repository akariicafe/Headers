@class NSUUID, NSSet, NSDictionary;

@interface HMDCharacteristicResponseNotificationContext : HMFObject

@property (readonly, copy) NSUUID *requestIdentifier;
@property (readonly, getter=hasPendingMultiPartResponses) BOOL pendingMultiPartResponses;
@property (readonly, copy) NSSet *changedCharacteristics;
@property (readonly, copy) NSDictionary *notificationPayloadByAccessoryUUID;
@property (readonly, copy) NSSet *responseCharacteristics;

- (void).cxx_destruct;
- (id)initWithRequestIdentifier:(id)a0 responses:(id)a1 pendingMultiPartResponses:(BOOL)a2;
- (id)notificationWithHome:(id)a0;

@end
