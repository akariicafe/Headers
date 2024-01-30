@class CWFEventID, NSUUID, NSDictionary, NSDate;

@interface CWFEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) CWFEventID *eventID;
@property (nonatomic) unsigned long long acknowledgementTimeout;
@property (copy, nonatomic) id /* block */ acknowledge;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSDictionary *info;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setType:(long long)a0;
- (BOOL)isEqualToEvent:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (long long)type;
- (BOOL)isEqual:(id)a0;

@end
