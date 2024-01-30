@class NSString;

@interface PKSwitchTableViewSettingsRow : NSObject <PKTableViewSettingsRow>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id value;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellReuseIdentifier;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)shouldHighlight;
- (id)tableViewCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_switchValueChanged:(id)a0;
- (id)initWithTitle:(id)a0 value:(BOOL)a1 changeHandler:(id /* block */)a2;

@end
