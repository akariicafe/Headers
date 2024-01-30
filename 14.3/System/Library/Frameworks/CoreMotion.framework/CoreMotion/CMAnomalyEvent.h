@class NSDate;

@interface CMAnomalyEvent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long response;
@property (nonatomic) long long resolution;
@property (nonatomic, getter=isAcknowledgement) BOOL acknowledgement;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) long long sosState;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) long long state;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0 absoluteTimestamp:(double)a1 state:(long long)a2 response:(long long)a3 resolution:(long long)a4 sosState:(long long)a5;
- (id)initWithIdentifier:(unsigned long long)a0 absoluteTimestamp:(double)a1 state:(long long)a2 response:(long long)a3 resolution:(long long)a4 sosState:(long long)a5 acknowledgement:(BOOL)a6;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
