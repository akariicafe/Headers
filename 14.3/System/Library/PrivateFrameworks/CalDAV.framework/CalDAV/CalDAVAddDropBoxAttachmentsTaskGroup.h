@class NSMutableDictionary, NSDictionary, NSURL, NSSet, CoreDAVUpdateACLTaskGroup, NSString;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVAddDropBoxAttachmentsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate>

@property (nonatomic) int state;
@property (nonatomic) BOOL attendeesCanManageDropBox;
@property (retain, nonatomic) NSMutableDictionary *sentAttachmentURLsToETags;
@property (retain, nonatomic) NSURL *dropboxURL;
@property (retain, nonatomic) NSDictionary *attachments;
@property (retain, nonatomic) NSDictionary *contentTypes;
@property (retain, nonatomic) NSSet *attendeePrincipalURLs;
@property (retain, nonatomic) NSSet *aceItems;
@property (retain, nonatomic) NSDictionary *putFailureSizes;
@property (retain, nonatomic) CoreDAVUpdateACLTaskGroup *updateACLTaskGroup;
@property (readonly, retain, nonatomic) NSDictionary *etags;
@property (nonatomic) id<CoreDAVTaskGroupDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dropboxACEItemsForPrincipalURLs:(id)a0 baseURL:(id)a1 writable:(BOOL)a2;

- (void).cxx_destruct;
- (void)taskGroup:(id)a0 didFinishWithError:(id)a1;
- (void)startTaskGroup;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)_finishWithError:(id)a0 state:(int)a1;
- (void)_updateACLWithState:(int)a0;
- (void)_sendAttachments;
- (void)_makeDropBox;
- (id)initWithAccountInfoProvider:(id)a0 dropboxURL:(id)a1 attachments:(id)a2 contentTypes:(id)a3 attendeePrincipalURLs:(id)a4 attendeesCanManageDropBox:(BOOL)a5 taskManager:(id)a6;

@end
