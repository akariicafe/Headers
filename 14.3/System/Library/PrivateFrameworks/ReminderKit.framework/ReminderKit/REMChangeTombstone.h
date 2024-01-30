@class NSUUID, NSString, NSNumber;

@interface REMChangeTombstone : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *objectIdentifier;
@property (readonly, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) NSNumber *daIsEventOnlyContainer;
@property (readonly, nonatomic) NSUUID *shareeOwningListIdentifier;
@property (readonly, nonatomic) NSString *shareeDisplayName;
@property (readonly, nonatomic) NSString *shareeAddress;
@property (readonly, nonatomic) NSUUID *assignmentOwningReminderIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
