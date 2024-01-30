@class NSString, NSDictionary, AMSDialogRequest, AMSEngagementRequest;

@interface AMSEngagementMessageEventServiceResponse : NSObject

@property (retain, nonatomic) AMSDialogRequest *dialogRequest;
@property (retain, nonatomic) AMSEngagementRequest *engagementRequest;
@property (retain, nonatomic) NSDictionary *placements;
@property (retain, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSDictionary *placementRequests;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0;
- (id)_placementWithDictionary:(id)a0;
- (id)_makeEngagementRequestWithDictionary:(id)a0;
- (id)_placementRequestsWithDictionary:(id)a0;
- (long long)_engagementPresentationStyleFromDictionary:(id)a0;

@end
