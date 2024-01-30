@class NSString;

@interface _UIActivityItemCustomizationSwitch : _UIActivityItemCustomization <_UIActivityItemCustomizationSwitch> {
    BOOL _value;
}

@property (copy, nonatomic, setter=_setHandler:) id /* block */ _handler;
@property (readonly, nonatomic) BOOL value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setValue:(BOOL)a0;
- (id)initWithTitle:(id)a0 identifier:(id)a1 value:(BOOL)a2 footerText:(id)a3;

@end
