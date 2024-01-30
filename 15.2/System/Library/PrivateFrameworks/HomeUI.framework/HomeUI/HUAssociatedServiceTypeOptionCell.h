@class NSString;

@interface HUAssociatedServiceTypeOptionCell : UITableViewCell <HUDisableableCellProtocol>

@property (nonatomic, getter=isChecked) BOOL checked;
@property (nonatomic, getter=isSuggestion) BOOL suggestion;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForReuse;
- (id)colorForCurrentState;

@end
