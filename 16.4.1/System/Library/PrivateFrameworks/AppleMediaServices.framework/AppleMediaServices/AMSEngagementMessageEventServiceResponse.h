@class NSString, NSDictionary, AMSEngagementMessageRequest, AMSDialogRequest, AMSEngagementRequest;

@interface AMSEngagementMessageEventServiceResponse : NSObject

@property (retain, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) AMSEngagementRequest *engagementRequest;
@property (retain, nonatomic) AMSEngagementMessageRequest *fullScreenMessageRequest;
@property (retain, nonatomic) NSDictionary *placementsMap;
@property (retain, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSDictionary *placementRequests;
@property (retain, nonatomic) AMSDialogRequest *dialogRequest;
@property (retain, nonatomic) NSDictionary *placements;

- (void).cxx_destruct;
- (id)_placementRequestsWithDictionary:(id)a0;
- (id)_placementsMapWithPayload:(id)a0;
- (id)initWithJSObject:(id)a0;

@end
