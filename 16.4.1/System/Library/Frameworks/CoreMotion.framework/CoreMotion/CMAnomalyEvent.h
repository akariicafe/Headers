@class NSDate;

@interface CMAnomalyEvent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long response;
@property (nonatomic) long long resolution;
@property (nonatomic, getter=isAcknowledgement) BOOL acknowledgement;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) double updateTimestamp;
@property (nonatomic) long long sosState;
@property (nonatomic) long long operatingMode;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSDate *updateDate;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) long long state;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)initWithIdentifier:(unsigned long long)a0 absoluteTimestamp:(double)a1 updateTimestamp:(double)a2 state:(long long)a3 response:(long long)a4 resolution:(long long)a5 sosState:(long long)a6 operatingMode:(long long)a7;
- (id)initWithIdentifier:(unsigned long long)a0 absoluteTimestamp:(double)a1 updateTimestamp:(double)a2 state:(long long)a3 response:(long long)a4 resolution:(long long)a5 sosState:(long long)a6 operatingMode:(long long)a7 acknowledgement:(BOOL)a8;

@end
