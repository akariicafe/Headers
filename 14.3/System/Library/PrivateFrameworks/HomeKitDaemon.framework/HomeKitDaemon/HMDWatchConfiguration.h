@class NSString, NSDictionary, NSUUID;

@interface HMDWatchConfiguration : HMFObject

@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) NSDictionary *metadataConfig;
@property (retain, nonatomic) NSDictionary *homeConfig;
@property (retain, nonatomic) NSUUID *primaryHome;

- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;
- (id)description;
- (void)setHomeConfiguration:(id)a0;
- (void)setConfigVersion:(id)a0 forHome:(id)a1;

@end
