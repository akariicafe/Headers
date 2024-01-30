@class NSString, CTUserLabel;

@interface CTDanglingPlanItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *iccid;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *simLabelID;
@property (retain, nonatomic) CTUserLabel *userLabel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIccid:(id)a0 phoneNumber:(id)a1 label:(id)a2 labelID:(id)a3;

@end
