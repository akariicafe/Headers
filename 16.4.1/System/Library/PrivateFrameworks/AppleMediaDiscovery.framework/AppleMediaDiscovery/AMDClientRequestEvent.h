@class NSString, NSDictionary, NSData;
@protocol AMDClientNotificationObserver;

@interface AMDClientRequestEvent : NSObject

@property (class, weak) id<AMDClientNotificationObserver> observer;

@property (retain) NSString *accountDSID;
@property (retain) NSString *storefrontId;
@property (retain, nonatomic) NSDictionary *customDescriptor;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *featureName;
@property (retain, nonatomic) NSString *modelId;
@property (retain, nonatomic) NSString *request;
@property (retain, nonatomic) NSString *schemaVersion;
@property (retain, nonatomic) NSString *treatmentId;
@property (retain, nonatomic) NSString *useCaseId;
@property (retain, nonatomic) NSString *PIRCallHandle;
@property (retain, nonatomic) NSData *PIRData;
@property (retain, nonatomic) NSData *PIRKeyword;

- (void).cxx_destruct;
- (id)getAMSRequest;
- (id)initAppSegmentQueryForAccountDSID:(id)a0;
- (id)initClearUserDataFor:(id)a0 inDomain:(id)a1;
- (id)initModelPathRequestForUsecaseId:(id)a0 andModelId:(id)a1 withTreatmentId:(id)a2 inDomain:(id)a3;
- (id)initPIRResponseForKeyword:(id)a0 withData:(id)a1 andCallHandle:(id)a2;
- (id)initWithFeatureName:(id)a0 withAccountDSID:(id)a1 andAccountStoreFrontId:(id)a2 inDomain:(id)a3 withCustomDescriptor:(id)a4 andSchemaVersion:(id)a5;
- (void)internalInitializer:(id)a0 WithFeatureName:(id)a1 withAccountDSID:(id)a2 andAccountStoreFrontId:(id)a3 inDomain:(id)a4 withCustomDescriptor:(id)a5 withModelId:(id)a6 withTreatmentId:(id)a7 withUseCaseId:(id)a8 andSchemaVersion:(id)a9;

@end
