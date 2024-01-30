@class NSString, NSArray;

@interface TCTestSentence : NSObject <NSCopying, NSSecureCoding> {
    NSString *_originalString;
    NSArray *_grammarDetails;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *originalString;
@property (readonly, copy) NSString *testString;
@property (readonly, copy) NSString *finalString;
@property (readonly, copy) NSArray *grammarDetails;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithOriginalString:(id)a0 grammarDetails:(id)a1;
- (id)initWithTestString:(id)a0;

@end
