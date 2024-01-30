@class HKCharacteristicType;

@interface _HDSetCharacteristicJournalEntry : HDJournalEntry

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) HKCharacteristicType *dataType;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
