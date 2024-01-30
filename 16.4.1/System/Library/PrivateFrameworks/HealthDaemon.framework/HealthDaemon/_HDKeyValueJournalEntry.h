@class NSString, NSDate;
@protocol NSSecureCoding;

@interface _HDKeyValueJournalEntry : HDJournalEntry {
    id<NSSecureCoding> _value;
    NSString *_key;
    NSString *_domain;
    long long _category;
    long long _provenance;
    long long _syncIdentity;
    NSDate *_modificationDate;
    long long _updatePolicy;
}

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 key:(id)a1 domain:(id)a2 category:(long long)a3 provenance:(long long)a4 syncIdentity:(long long)a5 updatePolicy:(long long)a6 modificationDate:(id)a7;

@end
