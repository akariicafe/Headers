@class NSString, TIKeyboardLayout, NSArray;

@interface TITypologyRecordReplacements : TITypologyRecord

@property (copy, nonatomic) NSString *string;
@property (retain, nonatomic) TIKeyboardLayout *keyLayout;
@property (retain, nonatomic) NSArray *candidates;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void)applyToStatistic:(id)a0;
- (void).cxx_destruct;

@end
