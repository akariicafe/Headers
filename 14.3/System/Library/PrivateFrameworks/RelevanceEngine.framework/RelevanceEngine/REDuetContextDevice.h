@class NSUUID;

@interface REDuetContextDevice : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long deviceType;

+ (id)localDevice;
+ (id)companionDevice;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithUUID:(id)a0 type:(unsigned long long)a1;

@end
