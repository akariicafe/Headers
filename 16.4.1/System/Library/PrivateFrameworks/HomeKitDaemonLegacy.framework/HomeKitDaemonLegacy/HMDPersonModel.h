@class NSUUID, NSString, NSData, NSSet;

@interface HMDPersonModel : HMBModel

@property (class, readonly) NSUUID *sentinelParentUUID;

@property (retain) NSData *personLinksData;
@property (retain) NSString *name;
@property (copy) NSSet *personLinks;

+ (id)hmbProperties;

- (id)initWithPerson:(id)a0;
- (id)createPerson;

@end
