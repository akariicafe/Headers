@class NSArray;

@interface CNHandleStringsContactPredicate : CNPredicate

@property (readonly, copy, nonatomic) NSArray *handleStrings;
@property (readonly, copy, nonatomic) NSArray *containerIdentifiers;

+ (BOOL)supportsSecureCoding;

- (id)shortDebugDescription;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id /* block */)cn_resultTransformWithMatchInfos:(id)a0;
- (id)initWithHandleStrings:(id)a0 containerIdentifiers:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithHandleStrings:(id)a0;

@end
