@class NSString;

@interface ASCTextOfferMetadata : ASCOfferMetadata

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isText;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
