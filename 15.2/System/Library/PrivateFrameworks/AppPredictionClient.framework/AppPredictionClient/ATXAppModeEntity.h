@class NSString, NSArray, ATXModeEntityScore;

@interface ATXAppModeEntity : NSObject <ATXModeEntityProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSArray *itunesGenreIds;
@property (retain, nonatomic) ATXModeEntityScore *scoreMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBundleId:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleId:(id)a0 itunesGenreIds:(id)a1;
- (id)jsonDict;

@end
