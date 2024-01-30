@class NSString, NSArray, URTAlertAction;

@interface URTAlert : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *message;
@property (retain, nonatomic) URTAlertAction *defaultAction;
@property (retain, nonatomic) URTAlertAction *otherAction;
@property (retain, nonatomic) URTAlertAction *cancelAction;
@property (copy, nonatomic) NSArray *allowedApplicationBundleIDs;

+ (id)alertWithTitle:(id)a0 message:(id)a1;

- (id)initWithTitle:(id)a0 message:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)userNotificationRepresentation;

@end
