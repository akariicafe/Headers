@class NSString, NSDate;

@interface GEOCommuteNotificationDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *commuteDetailsIdentifier;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) long long score;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 message:(id)a1 commuteDetailsIdentifier:(id)a2 expirationDate:(id)a3 score:(long long)a4;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
