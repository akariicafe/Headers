@class NSString;

@interface _LSBundleIdentifierAndType : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *type;

+ (id)createRepresentingRecord:(id)a0;
+ (id)createRepresentingProxy:(id)a0;

- (id)initWithBundleID:(id)a0 type:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
