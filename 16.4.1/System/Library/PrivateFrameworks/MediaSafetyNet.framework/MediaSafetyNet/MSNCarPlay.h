@class MXSystemController;

@interface MSNCarPlay : NSObject {
    BOOL _carplayConnected;
    MXSystemController *_systemController;
}

- (BOOL)carplayConnected;
- (id)init;
- (void).cxx_destruct;

@end
