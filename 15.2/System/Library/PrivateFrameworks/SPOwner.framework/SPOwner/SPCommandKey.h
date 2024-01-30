@class NSString, NSDateInterval, NSData, SPBeaconingKey, NSNumber;

@interface SPCommandKey : NSObject <NSCopying, NSSecureCoding, SPNearbyToken, SPConnectionMaterial>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) SPBeaconingKey *beaconingKey;
@property (copy, nonatomic) NSData *commandKey;
@property (copy, nonatomic) NSData *connectionToken;
@property (copy, nonatomic) NSData *nearbyToken;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSNumber *primaryIndex;
@property (copy, nonatomic) NSNumber *secondaryIndex;
@property (readonly, copy, nonatomic) NSData *address;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBeaconingKey:(id)a0 commandKey:(id)a1 connectionToken:(id)a2 nearbyToken:(id)a3 primaryIndex:(id)a4 secondaryIndex:(id)a5 type:(long long)a6;

@end
