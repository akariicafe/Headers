@interface _SWCPatternList : NSObject <SWCRedactedDescription, NSSecureCoding> {
    struct SWCPatternStorage { unsigned char blocking : 1; unsigned char hasPath : 1; unsigned char hasFragment : 1; unsigned char query : 2; unsigned char caseInsensitive : 1; unsigned char notPercentEncoded : 1; unsigned char hasRequiredEntitlement : 1; char cStrings[0]; } _storage[0];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long count;

+ (id)patternListWithArray:(id)a0;
+ (id)patternListWithDetailsDictionary:(id)a0 defaults:(id)a1;
+ (id)patternListWithDetailsDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)evaluateWithURLComponents:(id)a0 substitutionVariables:(id)a1 auditToken:(const struct { unsigned int x0[8]; } *)a2 matchingPattern:(id *)a3 index:(unsigned long long *)a4;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (unsigned long long)hash;
- (void)enumeratePatternsWithBlock:(id /* block */)a0;
- (id)_descriptionDebug:(BOOL)a0 redacted:(BOOL)a1;
- (id)debugDescription;

@end
