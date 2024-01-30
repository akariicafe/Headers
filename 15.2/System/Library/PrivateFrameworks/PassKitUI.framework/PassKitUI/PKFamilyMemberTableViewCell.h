@protocol PKFamilyMemberRowModel;

@interface PKFamilyMemberTableViewCell : UITableViewCell

@property (retain, nonatomic) id<PKFamilyMemberRowModel> rowModel;

- (void).cxx_destruct;
- (void)prepareForReuse;

@end
