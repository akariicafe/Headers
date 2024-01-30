@class NSString, NSMutableDictionary;

@interface CAMTransientImageManager : NSObject <PUTransientImageManager>

@property (readonly, nonatomic) NSMutableDictionary *_pairedVideosByPairedUUID;
@property (readonly, nonatomic) NSMutableDictionary *_activeRequestsByPairedUUID;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)existingPairedVideoUUIDs;
- (void)removePairedVideoForUUID:(id)a0;
- (void)_handleRequestTimeout:(id)a0;
- (id)insertPairedVideoWithConvertible:(id)a0 filterType:(long long)a1;
- (void)requestPairedVideoURLForUUID:(id)a0 resultHandler:(id /* block */)a1;
- (id)init;
- (id)existingPairedVideoForUUID:(id)a0;
- (void).cxx_destruct;

@end
