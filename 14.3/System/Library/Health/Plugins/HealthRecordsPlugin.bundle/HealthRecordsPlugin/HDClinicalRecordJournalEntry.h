@class NSString, HDCodableObjectCollection, NSArray;

@interface HDClinicalRecordJournalEntry : HDJournalEntry

@property (readonly, copy, nonatomic) NSString *gatewayExternalID;
@property (readonly, copy, nonatomic) HDCodableObjectCollection *codableRecordCollection;
@property (readonly, copy, nonatomic) NSArray *obsoleteResourceIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithGatewayExternalID:(id)a0 codableRecordCollection:(id)a1 obsoleteResourceIdentifiers:(id)a2;

@end
