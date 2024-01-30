@class NSString;

@interface PKSelectionTableViewSettingsRow : NSObject <PKTableViewSettingsRow>

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
- (void)handleCellSelection;
- (id)tableViewCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)initWithTitle:(id)a0 value:(id)a1 tapHandler:(id /* block */)a2;

@end
