@class _TVRCMRTelevisionWrapper, NSString, _TVRCMediaRemoteRemoteTextInputKeyboardImpl, _TVRCMediaRemoteLegacyKeyboardImpl;

@interface _TVRCMediaRemoteKeyboardImplManager : NSObject {
    NSString *_version;
    _TVRCMediaRemoteLegacyKeyboardImpl *_legacyImpl;
    _TVRCMediaRemoteRemoteTextInputKeyboardImpl *_rtiImpl;
}

@property (retain, nonatomic) _TVRCMRTelevisionWrapper *television;

- (void).cxx_destruct;
- (id)keyboardImpl;
- (id)initWithTelevisionSystemVersion:(id)a0;

@end
