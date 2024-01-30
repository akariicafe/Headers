@class NSString, TRIAppContainer, NSURL;

@interface TRIDynamicNamespaceRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *teamId;
@property (readonly, nonatomic) TRIAppContainer *appContainer;
@property (readonly, nonatomic) int cloudKitContainer;
@property (readonly, nonatomic) unsigned int compatibilityVersion;
@property (readonly, nonatomic) NSURL *defaultsFileURL;
@property (readonly, nonatomic) BOOL hasFetched;

+ (void)load;
+ (id)dynamicNamespaceRecordWithName:(id)a0 teamId:(id)a1 appContainer:(id)a2 cloudKitContainer:(int)a3 compatibilityVersion:(unsigned int)a4 defaultsFileURL:(id)a5 hasFetched:(BOOL)a6;

- (void)encodeWithCoder:(id)a0;
- (void)_swizzledEncodeWithCoder:(id)a0;
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 teamId:(id)a1 appContainer:(id)a2 cloudKitContainer:(int)a3 compatibilityVersion:(unsigned int)a4 defaultsFileURL:(id)a5 hasFetched:(BOOL)a6;
- (BOOL)isEqualToDynamicNamespaceRecord:(id)a0;
- (id)copyWithReplacementTeamId:(id)a0;
- (id)copyWithReplacementAppContainer:(id)a0;
- (id)copyWithReplacementCloudKitContainer:(int)a0;
- (id)copyWithReplacementDefaultsFileURL:(id)a0;
- (id)copyWithReplacementHasFetched:(BOOL)a0;

@end
