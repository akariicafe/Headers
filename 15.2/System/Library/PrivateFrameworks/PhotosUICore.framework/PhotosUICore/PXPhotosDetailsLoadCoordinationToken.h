@class PXPhotosDetailsLoadCoordinator;

@interface PXPhotosDetailsLoadCoordinationToken : NSObject {
    BOOL _didComplete;
}

@property (readonly, weak, nonatomic) PXPhotosDetailsLoadCoordinator *_loadCoordinator;

- (void)_timeout;
- (void)complete;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_initWithLoadCoordinator:(id)a0;

@end
