@class AVExternalDevice;

@interface AVExternalDeviceTurnByTurnToken : NSObject {
    AVExternalDevice *_externalDevice;
}

- (void)dealloc;
- (id)init;
- (id)initWithExternalDevice:(id)a0;

@end
