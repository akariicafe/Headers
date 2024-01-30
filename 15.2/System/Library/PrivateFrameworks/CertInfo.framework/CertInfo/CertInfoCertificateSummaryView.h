@class CertInfoCertificateSummaryDescriptionCell, UITableView, NSString, NSDate, CertInfoCertificateHeaderCell;

@interface CertInfoCertificateSummaryView : UIView <UITableViewDataSource, UITableViewDelegate> {
    id /* block */ _moreDetailsSelectedBlock;
}

@property (retain, nonatomic) CertInfoCertificateHeaderCell *headerCell;
@property (retain, nonatomic) CertInfoCertificateSummaryDescriptionCell *descriptionCell;
@property (readonly, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSString *trustTitle;
@property (retain, nonatomic) NSString *trustSubtitle;
@property (retain, nonatomic) NSString *purpose;
@property (retain, nonatomic) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_configureCell:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setMoreDetailsSelectedBlock:(id /* block */)a0;
- (id)_cellForReuseIdentifier:(id)a0;

@end
