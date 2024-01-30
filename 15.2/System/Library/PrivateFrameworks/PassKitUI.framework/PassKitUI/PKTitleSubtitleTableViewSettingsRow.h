@class NSString;

@interface PKTitleSubtitleTableViewSettingsRow : NSObject <PKTableViewSettingsRow>

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
- (id)initWithTitle:(id)a0 subtitle:(id)a1;
- (id)tableViewCellForTableView:(id)a0 atIndexPath:(id)a1;

@end
