@class NSUUID, HDCodableObjectCollection;

@interface HDMedicalRecordJournalEntry : HDJournalEntry

@property (readonly, copy, nonatomic) NSUUID *accountIdentifier;
@property (readonly, copy, nonatomic) HDCodableObjectCollection *codableRecordCollection;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAccountIdentifier:(id)a0 codableRecordCollection:(id)a1;

@end
