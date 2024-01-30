@class NSString;

@interface PSGTextualResponseSuggestion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *responseText;
@property (readonly, nonatomic) NSString *responseCategory;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 category:(id)a1;
- (BOOL)isEqualToTextualSuggestion:(id)a0;

@end
