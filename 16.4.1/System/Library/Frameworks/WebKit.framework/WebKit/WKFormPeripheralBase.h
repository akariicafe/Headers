@class NSObject, WKContentView;
@protocol WKFormControl;

@interface WKFormPeripheralBase : NSObject <WKFormPeripheral> {
    struct RetainPtr<NSObject<WKFormControl>> { void *m_ptr; } _control;
}

@property (readonly, nonatomic) WKContentView *view;
@property (readonly, nonatomic) NSObject<WKFormControl> *control;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) BOOL singleTapShouldEndEditing;

- (BOOL)handleKeyEvent:(id)a0;
- (id).cxx_construct;
- (id)assistantView;
- (void)beginEditing;
- (void)endEditing;
- (void).cxx_destruct;
- (id)initWithView:(id)a0 control:(void *)a1;

@end
