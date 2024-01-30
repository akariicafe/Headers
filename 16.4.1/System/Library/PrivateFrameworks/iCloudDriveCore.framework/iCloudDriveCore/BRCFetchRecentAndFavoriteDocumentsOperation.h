@class NSString, BRCServerZone;

@interface BRCFetchRecentAndFavoriteDocumentsOperation : _BRCOperation <BRCOperationSubclass> {
    BRCServerZone *_serverZone;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (id)createActivity;
- (BOOL)shouldRetryForError:(id)a0;
- (void).cxx_destruct;
- (void)_performQueryOperationForBit:(unsigned int)a0 index:(id)a1 completion:(id /* block */)a2;
- (id)initWithServerZone:(id)a0;

@end
