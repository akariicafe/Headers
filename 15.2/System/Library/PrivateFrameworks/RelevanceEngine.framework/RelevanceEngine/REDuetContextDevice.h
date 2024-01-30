@class NSUUID;

@interface REDuetContextDevice : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long deviceType;

+ (id)localDevice;
+ (id)companionDevice;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithUUID:(id)a0 type:(unsigned long long)a1;

@end
