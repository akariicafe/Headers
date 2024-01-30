@interface HDJournalEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
