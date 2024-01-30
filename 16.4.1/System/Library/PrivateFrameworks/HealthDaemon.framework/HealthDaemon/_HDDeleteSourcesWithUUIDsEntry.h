@class NSSet, NSString;

@interface _HDDeleteSourcesWithUUIDsEntry : HDJournalEntry

@property (retain, nonatomic) NSSet *UUIDs;
@property (copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUIDs:(id)a0 bundleIdentifier:(id)a1;

@end
