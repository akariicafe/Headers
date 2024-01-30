@class AVExternalDevice;

@interface AVExternalDeviceTurnByTurnToken : NSObject {
    AVExternalDevice *_externalDevice;
}

- (id)init;
- (void)dealloc;
- (id)initWithExternalDevice:(id)a0;

@end
