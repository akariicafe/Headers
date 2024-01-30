@class NSDictionary, NSUUID, NSDateInterval;

@interface HAENotificationEvent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double level;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) unsigned int eventType;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) NSUUID *uuid;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)getEventTypeString;
- (id)initWithEventType:(unsigned int)a0 exposureLevel:(double)a1 dateInterval:(id)a2 metadata:(id)a3;

@end
