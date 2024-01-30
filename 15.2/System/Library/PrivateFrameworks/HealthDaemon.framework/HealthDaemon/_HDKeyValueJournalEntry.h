@class NSString, NSDate;
@protocol NSSecureCoding;

@interface _HDKeyValueJournalEntry : HDJournalEntry {
    id<NSSecureCoding> _value;
    NSString *_key;
    NSString *_domain;
    long long _category;
    long long _provenance;
    NSDate *_modificationDate;
    long long _updatePolicy;
}

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(id)a0 key:(id)a1 domain:(id)a2 category:(long long)a3 provenance:(long long)a4 updatePolicy:(long long)a5 modificationDate:(id)a6;

@end
