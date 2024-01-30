@class NSString;

@interface SXScrollPosition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *jsonRepresentation;

+ (BOOL)jsonDictionaryRepresentationIsValid:(id)a0 exactly:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSONRepresentation:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 exactly:(BOOL)a1;

@end
