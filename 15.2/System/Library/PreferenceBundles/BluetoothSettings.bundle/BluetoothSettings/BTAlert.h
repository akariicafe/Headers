@class UIAlertController, BTSDevice;
@protocol BTAlertDelegate;

@interface BTAlert : NSObject {
    id<BTAlertDelegate> _delegate;
    UIAlertController *_alert;
    BTSDevice *_device;
}

- (BOOL)isiPhone;
- (id)initWithDevice:(id)a0;
- (void)dismiss;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)show;
- (void)dealloc;
- (void)showAlertWithResult:(id)a0;
- (void)userActionResponseWithUnpairStatus:(BOOL)a0;

@end
