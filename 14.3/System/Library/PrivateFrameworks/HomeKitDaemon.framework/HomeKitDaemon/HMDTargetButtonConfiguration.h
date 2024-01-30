@class NSString;

@interface HMDTargetButtonConfiguration : HMFObject

@property (readonly, nonatomic) unsigned char identifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *name;

- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 identifier:(id)a1 name:(id)a2;
- (id)buttonName;

@end
