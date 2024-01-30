@class NSString;
@protocol _PUPickerRemoteUIViewControllerHostInterface;

@interface PUPickerRemoteUIViewController : _UIRemoteViewController <_PUPickerRemoteUIViewControllerHostInterface>

@property (weak, nonatomic) id<_PUPickerRemoteUIViewControllerHostInterface> _delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;

- (void).cxx_destruct;
- (void)_pickerDidFinishPicking:(id)a0;

@end
