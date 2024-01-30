@class NSString;

@interface CTSimDeactivationEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) NSString *reasonCode;
@property (retain, nonatomic) NSString *networkPlmn;
@property (nonatomic) BOOL isRoaming;
@property (nonatomic) BOOL isNetworkInitiated;
@property (retain, nonatomic) NSString *rat;
@property (nonatomic) long long timeOfEvent;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
