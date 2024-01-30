@class NSString, NSArray;

@interface CSPerson : NSObject <CSCoderEncoder, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSArray *handles;
@property (retain, nonatomic) NSString *handleIdentifier;
@property (copy) NSString *contactIdentifier;

- (void)encodeWithCSCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDisplayName:(id)a0 handles:(id)a1 handleIdentifier:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
