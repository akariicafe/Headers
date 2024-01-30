@class NSArray, NSString;

@interface CTTransportKeysReceipt : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *stks;
@property (retain, nonatomic) NSString *sps_environment;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWith:(id)a0;
- (id)initWith:(id)a0 sps:(id)a1;

@end
