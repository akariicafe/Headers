@class UIAlertController, BTSDevice;
@protocol BTAlertDelegate;

@interface BTAlert : NSObject {
    id<BTAlertDelegate> _delegate;
    UIAlertController *_alert;
    BTSDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void)show;
- (void)showAlertWithResult:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void)dismiss;
- (BOOL)isiPhone;
- (void)userActionResponseWithUnpairStatus:(BOOL)a0;

@end
