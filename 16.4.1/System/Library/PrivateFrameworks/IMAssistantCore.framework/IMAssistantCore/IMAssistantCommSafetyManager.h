@class IMCommSafetyRequestsManager, NSString, IMCommSafetySettingsManager;

@interface IMAssistantCommSafetyManager : NSObject <IMAssistantCommSafetyManager>

@property (readonly, nonatomic) IMCommSafetyRequestsManager *commSafetyRequestsManager;
@property (readonly, nonatomic) IMCommSafetySettingsManager *commSafetySettingsManager;
@property (readonly, nonatomic) BOOL checkSensitivePhotos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)isSensitiveImage:(id)a0 withChatID:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithCommSafetyRequestsManager:(id)a0 commSafetySettingsManager:(id)a1;

@end
