@class NSString, NSArray;

@interface CSPerson : NSObject <CSCoderEncoder, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSArray *handles;
@property (retain, nonatomic) NSString *handleIdentifier;
@property (retain, nonatomic) NSString *photosPersonIdentifier;
@property (copy) NSString *contactIdentifier;

- (void)encodeWithCoder:(id)a0;
- (void)encodeWithCSCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 handles:(id)a1 handleIdentifier:(id)a2;
- (id)initWithDisplayName:(id)a0 handles:(id)a1 handleIdentifier:(id)a2 photosPersonIdentifier:(id)a3;

@end
