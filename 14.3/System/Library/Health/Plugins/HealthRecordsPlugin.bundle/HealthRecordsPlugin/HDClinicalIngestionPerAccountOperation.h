@class HDClinicalAccount;

@interface HDClinicalIngestionPerAccountOperation : HDClinicalIngestionOperation {
    HDClinicalAccount *_account;
}

@property (readonly, copy) HDClinicalAccount *account;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithTask:(id)a0 account:(id)a1 nextOperation:(id)a2;

@end
