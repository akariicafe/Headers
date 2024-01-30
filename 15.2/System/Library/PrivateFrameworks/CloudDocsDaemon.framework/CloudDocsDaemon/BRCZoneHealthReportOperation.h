@class NSString, BRCAccountSession;

@interface BRCZoneHealthReportOperation : _BRCOperation <BRCOperationSubclass> {
    BOOL shouldPerformAnotherBatch;
    BRCAccountSession *_session;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSession:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (BOOL)shouldRetryForError:(id)a0;
- (BOOL)shouldPerformAnotherBatch;
- (void)_reportRecords:(id)a0 requestID:(unsigned long long)a1;

@end
