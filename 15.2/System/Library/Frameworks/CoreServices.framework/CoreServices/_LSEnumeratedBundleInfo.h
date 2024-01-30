@class NSString;

@interface _LSEnumeratedBundleInfo : NSObject

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL isPlaceholder;

- (id)initWithBundleID:(id)a0 isPlaceholder:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
