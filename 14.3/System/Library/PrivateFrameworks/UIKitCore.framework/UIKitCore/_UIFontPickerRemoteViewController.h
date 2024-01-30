@class NSString;
@protocol _UIFontPickerRemoteViewControllerHost;

@interface _UIFontPickerRemoteViewController : _UIRemoteViewController <_UIFontPickerRemoteViewControllerHost>

@property (weak, nonatomic) id<_UIFontPickerRemoteViewControllerHost> _delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)_pickerDidSelectFont:(id)a0;
- (void)_pickerDidCancel;

@end
