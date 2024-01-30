@class NSString, NSArray;

@interface CSPerson : NSObject <CSCoderEncoder, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSArray *handles;
@property (retain, nonatomic) NSString *handleIdentifier;
@property (copy) NSString *contactIdentifier;

- (void)encodeWithCSCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDisplayName:(id)a0 handles:(id)a1 handleIdentifier:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
