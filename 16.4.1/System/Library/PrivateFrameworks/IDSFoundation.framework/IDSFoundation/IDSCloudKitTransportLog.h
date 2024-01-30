@class IDSCKDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface IDSCloudKitTransportLog : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) IDSCKDatabase *database;

+ (id)_messageFromRecord:(id)a0;

- (void).cxx_destruct;
- (void)fetchChangesSinceToken:(id)a0 completion:(id /* block */)a1;
- (id)_recordIDsToFetch;
- (id)_transportRecordZoneID;
- (void)createZone:(id /* block */)a0;
- (void)disabled_fetchChangesSinceToken:(id)a0 completion:(id /* block */)a1;
- (void)dropZone:(id /* block */)a0;
- (id)initWithDatabase:(id)a0 queue:(id)a1;

@end
