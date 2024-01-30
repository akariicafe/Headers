@class UIAlertController, BTSDevice;
@protocol BTAlertDelegate;

@interface BTAlert : NSObject {
    id<BTAlertDelegate> _delegate;
    UIAlertController *_alert;
    BTSDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (BOOL)isiPhone;
- (void)dismiss;
- (void)show;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)showAlertWithResult:(id)a0;
- (void)userActionResponseWithUnpairStatus:(BOOL)a0;

@end
