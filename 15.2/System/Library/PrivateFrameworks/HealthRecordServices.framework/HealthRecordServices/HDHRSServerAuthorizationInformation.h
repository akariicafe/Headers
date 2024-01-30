@class NSString, NSSet;

@interface HDHRSServerAuthorizationInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *patientID;
@property (readonly, copy, nonatomic) NSString *accessToken;
@property (readonly, copy, nonatomic) NSSet *scopeSet;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPatientID:(id)a0 accessToken:(id)a1 scopeSet:(id)a2;

@end
