@class NSObject, WKContentView;
@protocol WKFormControl;

@interface WKFormPeripheralBase : NSObject <WKFormPeripheral> {
    struct RetainPtr<NSObject<WKFormControl> > { void *m_ptr; } _control;
}

@property (readonly, nonatomic) WKContentView *view;
@property (readonly, nonatomic) NSObject<WKFormControl> *control;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;

- (BOOL)handleKeyEvent:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)assistantView;
- (void)endEditing;
- (id)initWithView:(id)a0 control:(struct RetainPtr<NSObject<WKFormControl> > { void *x0; } *)a1;
- (void)beginEditing;

@end
