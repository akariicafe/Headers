@class NSString;

@interface DMCEnrollmentTableViewTextFieldCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)textField;
- (id)initWithType:(unsigned long long)a0;
- (void)layoutSubviews;
- (id)cell;
- (double)estimatedCellHeight;
- (double)cellHeight;
- (id)_placeHolderStringForType:(unsigned long long)a0;

@end
