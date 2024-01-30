@class NSString, NSMutableDictionary;

@interface CAMTransientImageManager : NSObject <PUTransientImageManager>

@property (readonly, nonatomic) NSMutableDictionary *_pairedVideosByPairedUUID;
@property (readonly, nonatomic) NSMutableDictionary *_activeRequestsByPairedUUID;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)requestPairedVideoURLForUUID:(id)a0 resultHandler:(id /* block */)a1;
- (id)insertPairedVideoWithConvertible:(id)a0 filterType:(long long)a1;
- (void)removePairedVideoForUUID:(id)a0;
- (id)existingPairedVideoUUIDs;
- (void)_handleRequestTimeout:(id)a0;
- (id)existingPairedVideoForUUID:(id)a0;

@end
