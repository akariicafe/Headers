@class NSString;

@interface CALNNotificationIdentifier : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;

+ (id)_constructNotificationIdentifierStringRepresentationFromComponents:(id)a0;
+ (id)_deconstructNotificationIdentifierStringRepresentationIntoComponents:(id)a0;
+ (id)_allowedCharacterSetForEncodingNotificationIdentifierComponents;

- (BOOL)isEqualToNotificationIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSourceIdentifier:(id)a0 sourceClientIdentifier:(id)a1;
- (unsigned long long)hash;
- (id)initWithStringRepresentation:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithSourceIdentifier:(id)a0 sourceClientIdentifier:(id)a1 stringRepresentation:(id)a2;

@end
