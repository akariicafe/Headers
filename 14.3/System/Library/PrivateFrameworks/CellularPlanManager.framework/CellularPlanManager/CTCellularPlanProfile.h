@class NSData, NSString;

@interface CTCellularPlanProfile : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isBootstrap;
@property (nonatomic) BOOL isDisableNotAllowed;
@property (nonatomic) BOOL isDeleteNotAllowed;
@property (nonatomic) BOOL requiresUserConsent;
@property (copy, nonatomic) NSData *profileId;
@property (copy, nonatomic) NSString *iccid;

- (void).cxx_destruct;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProfileId:(id)a0 iccid:(id)a1 selected:(BOOL)a2 bootstrap:(BOOL)a3 disableNotAllowed:(BOOL)a4 deleteNotAllowed:(BOOL)a5 requiresUserConsent:(BOOL)a6;

@end
