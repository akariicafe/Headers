@class IDSURI, NSDate;

@interface IDSPhoneTemporaryAliasDescription : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IDSURI *URI;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL selected;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURI:(id)a0 expirationDate:(id)a1 selected:(BOOL)a2;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
