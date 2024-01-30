@class NSString, NSUUID;

@interface HMAccessoryCategory : NSObject <NSSecureCoding, HMObjectMerge, HMFDumpState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *categoryType;
@property (copy, nonatomic) NSString *name;
@property (readonly) BOOL isWiFiRouterAccessoryCategory;
@property (readonly) BOOL isTelevisionAccessoryCategory;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (id)initWithType:(id)a0 name:(id)a1;
- (id)localizedDescriptionPlural;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
