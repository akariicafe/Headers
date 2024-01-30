@class NSURL, NSString;

@interface CardDAVUpdateMeCardTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate>

@property (readonly, nonatomic) NSURL *cardURL;
@property (readonly, nonatomic) NSURL *homeURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTaskGroup;
- (void).cxx_destruct;
- (id)_newPropPatchTask;
- (id)initWithAccountInfoProvider:(id)a0 taskManager:(id)a1 homeURL:(id)a2 cardURL:(id)a3;
- (void)propPatchTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;

@end
