@class NSString, NSDictionary;
@protocol AMDClientNotificationObserver;

@interface AMDClientRequestEvent : NSObject

@property (class, weak) id<AMDClientNotificationObserver> observer;

@property (retain) NSString *accountDSID;
@property (retain) NSString *storefrontId;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *featureName;
@property (retain, nonatomic) NSDictionary *customDescriptor;
@property (retain, nonatomic) NSString *schemaVersion;

- (void).cxx_destruct;
- (id)initWithFeatureName:(id)a0 withAccountDSID:(id)a1 andAccountStoreFrontId:(id)a2 inDomain:(id)a3 withCustomDescriptor:(id)a4 andSchemaVersion:(id)a5;
- (id)initAppSegmentQueryForAccountDSID:(id)a0;
- (id)getAMSRequest;

@end
