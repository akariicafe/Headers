@interface _REMChangeUniversalToken : REMChangeToken

+ (id)universalToken;
+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (long long)compareToken:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)isUniversal;
- (void)encodeWithCoder:(id)a0;

@end
