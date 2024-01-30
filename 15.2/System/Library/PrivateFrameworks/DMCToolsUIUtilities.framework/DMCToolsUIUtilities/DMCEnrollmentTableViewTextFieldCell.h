@class NSString;

@interface DMCEnrollmentTableViewTextFieldCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cell;
- (id)textField;
- (void)layoutSubviews;
- (double)cellHeight;
- (id)initWithType:(unsigned long long)a0;
- (double)estimatedCellHeight;
- (id)_placeHolderStringForType:(unsigned long long)a0;

@end
