@class PSSpecifier;

@interface _MSSCellularDataEnabledInvocation : NSObject {
    PSSpecifier *_specifier;
    id /* block */ _changeHandler;
    id _target;
    SEL _getter;
    SEL _setter;
}

@property (readonly, nonatomic) BOOL enabled;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSpecifier:(id)a0 changeHandler:(id /* block */)a1;
- (void)_setCellularDataEnabled:(id)a0 forSpecifier:(id)a1;
- (id)_cellularDataEnabledForSpecifier:(id)a0;

@end
