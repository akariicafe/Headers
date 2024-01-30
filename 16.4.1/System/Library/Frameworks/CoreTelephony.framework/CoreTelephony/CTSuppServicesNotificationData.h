@class NSNumber, NSString;

@interface CTSuppServicesNotificationData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *callForwardingReason;
@property (retain, nonatomic) NSNumber *callClass;
@property (retain, nonatomic) NSNumber *enabled;
@property (retain, nonatomic) NSNumber *active;
@property (retain, nonatomic) NSString *callForwardingNumber;
@property (retain, nonatomic) NSNumber *callForwardingNoReplyTime;
@property (retain, nonatomic) NSNumber *mmiProcedure;
@property (retain, nonatomic) NSNumber *callBarringFacility;
@property (retain, nonatomic) NSNumber *supplementaryServiceType;
@property (retain, nonatomic) NSNumber *callingLineIdRestriction;
@property (retain, nonatomic) NSNumber *callingLineIdRestrictionModification;
@property (retain, nonatomic) NSNumber *connectedLineIdRestriction;
@property (retain, nonatomic) NSNumber *callingNamePresentation;
@property (retain, nonatomic) NSNumber *connectedLinePresentation;
@property (retain, nonatomic) NSNumber *callingLinePresentation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
