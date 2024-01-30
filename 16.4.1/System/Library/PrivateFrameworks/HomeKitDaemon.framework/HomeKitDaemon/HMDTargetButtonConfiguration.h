@class NSString;

@interface HMDTargetButtonConfiguration : HMFObject

@property (readonly, nonatomic) unsigned char identifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *name;

- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(long long)a0 identifier:(id)a1 name:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (id)buttonName;

@end
