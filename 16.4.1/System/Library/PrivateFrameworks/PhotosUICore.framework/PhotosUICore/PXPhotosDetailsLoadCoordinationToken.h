@class PXPhotosDetailsLoadCoordinator;

@interface PXPhotosDetailsLoadCoordinationToken : NSObject {
    BOOL _didComplete;
}

@property (readonly, weak, nonatomic) PXPhotosDetailsLoadCoordinator *_loadCoordinator;

- (void)complete;
- (void)_timeout;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithLoadCoordinator:(id)a0;

@end
