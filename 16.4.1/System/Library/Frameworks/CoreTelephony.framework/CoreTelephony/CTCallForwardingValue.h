@class NSString, NSNumber;

@interface CTCallForwardingValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int reason;
@property (nonatomic) int clss;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *saveNumber;
@property (retain, nonatomic) NSNumber *noReplyTime;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
