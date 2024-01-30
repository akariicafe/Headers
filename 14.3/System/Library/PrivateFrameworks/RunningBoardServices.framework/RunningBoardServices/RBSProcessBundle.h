@class RBSProcessInstance, NSString, NSDictionary;
@protocol RBSProcessBundleDataSource;

@interface RBSProcessBundle : NSObject <RBSXPCSecureCoding> {
    NSDictionary *_plistValues;
}

@property (readonly, weak, nonatomic) id<RBSProcessBundleDataSource> dataSource;
@property (retain, nonatomic) RBSProcessInstance *instance;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSString *executablePath;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)bundleWithDataSource:(id)a0;

- (id)bundleInfoValuesForKeys:(id)a0;
- (void).cxx_destruct;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)bundleInfoValueForKey:(id)a0;

@end
