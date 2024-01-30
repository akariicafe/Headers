@class NSString;

@interface _HDUserDefaultRemovedJournalEntry : HDJournalEntry

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
