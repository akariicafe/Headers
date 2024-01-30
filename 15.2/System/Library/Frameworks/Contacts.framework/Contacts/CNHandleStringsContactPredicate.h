@class NSArray;

@interface CNHandleStringsContactPredicate : CNPredicate

@property (readonly, copy, nonatomic) NSArray *handleStrings;
@property (readonly, copy, nonatomic) NSArray *containerIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithHandleStrings:(id)a0 containerIdentifiers:(id)a1;
- (id)description;
- (id)initWithHandleStrings:(id)a0;
- (id)shortDebugDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id /* block */)cn_resultTransformWithMatchInfos:(id)a0;

@end
