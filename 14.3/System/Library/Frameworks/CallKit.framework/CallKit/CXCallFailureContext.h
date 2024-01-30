@class NSString;

@interface CXCallFailureContext : NSObject <CXCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long failureReason;
@property (nonatomic) long long providerErrorCode;
@property (nonatomic) long long providerEndedReason;
@property (nonatomic) BOOL hasWiFiSettingsRemediation;
@property (nonatomic) BOOL hasCellularSettingsRemediation;
@property (nonatomic) BOOL hasDateAndTimeSettingsRemediation;
@property (nonatomic) BOOL hasLocationSettingsRemediation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)sanitizedCopy;

@end
