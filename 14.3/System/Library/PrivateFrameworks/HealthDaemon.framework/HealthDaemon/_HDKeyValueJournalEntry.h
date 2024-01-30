@class NSString, NSDate;
@protocol NSSecureCoding;

@interface _HDKeyValueJournalEntry : HDJournalEntry

@property (readonly, nonatomic) id<NSSecureCoding> value;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) long long provenance;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) long long updatePolicy;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithValue:(id)a0 key:(id)a1 domain:(id)a2 category:(long long)a3 provenance:(long long)a4 updatePolicy:(long long)a5 modificationDate:(id)a6;

@end
