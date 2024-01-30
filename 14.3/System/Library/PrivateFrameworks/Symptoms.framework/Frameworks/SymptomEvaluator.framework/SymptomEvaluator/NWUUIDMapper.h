@class NSUUID;

@interface NWUUIDMapper : NSObject

@property (nonatomic) double lastAccessDate;
@property (retain, nonatomic) NSUUID *externalUUID;
@property (nonatomic) unsigned long long usageFlags;

- (void).cxx_destruct;
- (id)description;

@end
