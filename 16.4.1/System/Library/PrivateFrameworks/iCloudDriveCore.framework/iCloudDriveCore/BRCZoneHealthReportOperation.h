@class NSString, BRCAccountSessionFPFS;

@interface BRCZoneHealthReportOperation : _BRCOperation <BRCOperationSubclass> {
    BOOL shouldPerformAnotherBatch;
    BRCAccountSessionFPFS *_session;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (BOOL)shouldRetryForError:(id)a0;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)_reportRecords:(id)a0 requestID:(unsigned long long)a1;
- (BOOL)shouldPerformAnotherBatch;

@end
