@class COMeshResponse, COMeshRequest, COMeshNode, NSString;

@interface COMeshControllerQueuedRequest : NSObject <COMeshControllerQueuedElementProtocol>

@property (readonly, nonatomic) COMeshRequest *request;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) COMeshResponse *response;
@property (retain, nonatomic) COMeshNode *destination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
