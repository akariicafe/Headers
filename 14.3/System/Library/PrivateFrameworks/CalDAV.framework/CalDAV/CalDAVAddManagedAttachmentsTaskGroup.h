@class NSMutableDictionary, NSDictionary, NSURL, NSData, NSString;

@interface CalDAVAddManagedAttachmentsTaskGroup : CoreDAVTaskGroup {
    NSURL *_postURLWithQuery;
}

@property (nonatomic) int state;
@property (retain, nonatomic) NSURL *resourceURL;
@property (retain, nonatomic) NSDictionary *attachments;
@property (retain, nonatomic) NSDictionary *contentTypes;
@property (retain, nonatomic) NSMutableDictionary *filenamesToServerLocation;
@property (retain, nonatomic) NSData *updatedResourcePayload;
@property (nonatomic) BOOL hadPreconditionFailure;
@property (retain, nonatomic) NSString *updatedETag;
@property (retain, nonatomic) NSString *updatedScheduleTag;
@property (retain, nonatomic) NSDictionary *postFailureSizes;
@property (retain, nonatomic) NSString *previousETag;
@property (retain, nonatomic) NSString *previousScheduleTag;

- (void).cxx_destruct;
- (id)initWithAccountInfoProvider:(id)a0 resourceURL:(id)a1 attachments:(id)a2 contentTypes:(id)a3 taskManager:(id)a4;
- (void)startTaskGroup;
- (void)_finishWithError:(id)a0 state:(int)a1;
- (id)urlWithQuery;
- (void)_sendAttachments;
- (BOOL)_postedLastAttachment;
- (void)_fetchUpdatedContent;
- (void)_handlePostResponse:(id)a0;

@end
