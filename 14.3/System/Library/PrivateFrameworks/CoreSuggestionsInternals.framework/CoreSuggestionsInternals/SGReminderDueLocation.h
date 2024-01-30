@class NSString;

@interface SGReminderDueLocation : NSObject

@property (readonly, nonatomic) unsigned char locationType;
@property (readonly, nonatomic) unsigned char trigger;
@property (readonly, nonatomic) NSString *name;

+ (id)mergeDueLocations:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocationType:(unsigned char)a0 trigger:(unsigned char)a1 name:(id)a2;
- (BOOL)isEqualToReminderDueLocation:(id)a0;

@end
