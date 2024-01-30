@class NSString, NSDate;

@interface PPNotification : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSDate *date;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithBundleId:(id)a0 title:(id)a1 subtitle:(id)a2 message:(id)a3 date:(id)a4;
- (id)initWithCurrentDateAndBundleId:(id)a0 title:(id)a1 subtitle:(id)a2 message:(id)a3;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToNotification:(id)a0;

@end
