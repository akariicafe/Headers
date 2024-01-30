@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CAMNebulaKeepAliveController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_syncQueue;
@property (nonatomic, setter=_setNebuladKeepAliveFileDescriptor:) int _nebuladKeepAliveFileDescriptor;
@property (readonly, nonatomic) NSMutableSet *_nebuladKeepAliveIdentifiers;
@property (nonatomic, setter=_setDidCreateKeepAliveDirectory:) BOOL _didCreateKeepAliveDirectory;

- (id)init;
- (void).cxx_destruct;
- (id)_keepAliveFilePath;
- (void)removeKeepAliveFileIfNotKeptForAnyIdentifiers;
- (void)startKeepAliveForIdentifier:(id)a0;
- (void)stopKeepAliveForIdentifier:(id)a0;

@end
