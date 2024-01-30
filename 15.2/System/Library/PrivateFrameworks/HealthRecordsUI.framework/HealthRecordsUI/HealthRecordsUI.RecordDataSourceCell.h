@class NSString;

@interface HealthRecordsUI.RecordDataSourceCell : UITableViewCell {
    void /* unknown type, empty encoding */ brandView;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)configCellWith:(id)a0 subject:(id)a1 dataProvider:(id)a2;
- (void)configCellWith:(id)a0 owner:(id)a1 dataProvider:(id)a2;

@end
