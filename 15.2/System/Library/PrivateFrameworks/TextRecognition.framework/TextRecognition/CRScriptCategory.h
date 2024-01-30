@class NSString;

@interface CRScriptCategory : NSObject <NSCopying>

@property (readonly) NSString *categoryName;
@property (readonly) unsigned long long categoryRevision;

+ (float)confidenceThreshold;
+ (id)supportedCategories;
+ (unsigned long long)categoryRevision;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCategoryName:(id)a0;

@end
