@class CWFEventID, NSUUID, NSDictionary, NSDate;

@interface CWFEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) CWFEventID *eventID;
@property (nonatomic) unsigned long long acknowledgementTimeout;
@property (copy, nonatomic) id /* block */ acknowledge;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSDictionary *info;

- (long long)type;
- (BOOL)isEqualToEvent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setType:(long long)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
