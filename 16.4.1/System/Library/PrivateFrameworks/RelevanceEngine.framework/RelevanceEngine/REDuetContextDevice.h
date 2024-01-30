@class NSUUID;

@interface REDuetContextDevice : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long deviceType;

+ (id)localDevice;
+ (id)companionDevice;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 type:(unsigned long long)a1;

@end
