@class NSString, NSNumber;

@interface HAPAccessoryInfo : HMFObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) NSNumber *category;
@property (readonly, nonatomic) NSString *certificationStatus;
@property (readonly, nonatomic) NSString *blacklisted;
@property (readonly, nonatomic) NSString *ppid;
@property (readonly, nonatomic) BOOL authenticated;

- (BOOL)isBlacklisted;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isCertified;
- (id)initWithName:(id)a0 manufacturer:(id)a1 modelName:(id)a2 category:(id)a3 certificationStatus:(id)a4 blacklisted:(id)a5 ppid:(id)a6;

@end
