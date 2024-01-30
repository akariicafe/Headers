@class NSNumber;

@interface ATXAppDirectoryEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *bundleIdInTopAppsVisible;
@property (retain, nonatomic) NSNumber *userLaunchedAppBeforeLeaving;

- (id)initWithProto:(id)a0;
- (BOOL)isEqualToATXAppDirectoryEventMetadata:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleIdInTopAppsVisible:(id)a0 userLaunchedAppBeforeLeaving:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (unsigned long long)hash;
- (id)encodeAsProto;
- (id)jsonDict;

@end
