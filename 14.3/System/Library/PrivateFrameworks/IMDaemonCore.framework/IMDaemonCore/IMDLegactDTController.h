@class IDSService, NSString;

@interface IMDLegactDTController : NSObject <IDSServiceDelegate>

@property (retain, nonatomic) IDSService *dtService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
