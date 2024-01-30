@class NSString;
@protocol _PUPickerExtensionContextHostInterface;

@interface PUPickerExtensionHostContext : PUPickerExtensionContext <_PUPickerExtensionContextHostInterface>

@property (weak, nonatomic) id<_PUPickerExtensionContextHostInterface> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_pickerDidFinishPicking:(id)a0;
- (void)_pickerDidSetModalInPresentation:(BOOL)a0;

@end
