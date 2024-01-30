@class NSDictionary, ICMusicSubscriptionStatus, NSDate;

@interface ICMusicSubscriptionStatusResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isFinalResponse) BOOL finalResponse;
@property (nonatomic) BOOL needsReload;
@property (copy, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus;
@property (readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

+ (BOOL)isValidSubscriptionStatusPropertyListRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)isValidSubscriptionStatusResponseDictionary:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithResponseDictionary:(id)a0 expirationDate:(id)a1;
- (id)initWithPropertyListRepresentation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
