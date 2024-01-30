@class _KSTIUserDictionaryEntryValue;

@interface _KSTIUserDictionaryTransaction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _KSTIUserDictionaryEntryValue *valueToDelete;
@property (retain, nonatomic) _KSTIUserDictionaryEntryValue *valueToInsert;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
