@class NSString, NSDate;

@interface PPNotification : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSDate *date;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToNotification:(id)a0;
- (id)initWithCurrentDateAndBundleId:(id)a0 title:(id)a1 subtitle:(id)a2 message:(id)a3;
- (id)initWithBundleId:(id)a0 title:(id)a1 subtitle:(id)a2 message:(id)a3 date:(id)a4;
- (void)encodeWithCoder:(id)a0;

@end
