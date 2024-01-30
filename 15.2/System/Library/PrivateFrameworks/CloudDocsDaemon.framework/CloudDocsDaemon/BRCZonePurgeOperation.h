@class NSString, BRCPrivateServerZone;

@interface BRCZonePurgeOperation : _BRCOperation <BRCOperationSubclass> {
    BRCPrivateServerZone *_serverZone;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (void).cxx_destruct;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (id)initWithServerZone:(id)a0;

@end
