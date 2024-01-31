@class NSArray;

@interface CNHandleStringsContactPredicate : CNPredicate

@property (readonly, copy, nonatomic) NSArray *handleStrings;
@property (readonly, copy, nonatomic) NSArray *containerIdentifiers;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (unsigned long long)hash;
- (id)shortDebugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id /* block */)cn_resultTransformWithMatchInfos:(id)a0;
- (void)cn_triageWithLog:(id)a0 serialNumber:(unsigned long long)a1;
- (id)initWithHandleStrings:(id)a0;
- (id)initWithHandleStrings:(id)a0 containerIdentifiers:(id)a1;

@end
