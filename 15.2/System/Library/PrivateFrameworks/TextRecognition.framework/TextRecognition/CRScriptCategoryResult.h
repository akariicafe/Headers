@class CRScriptCategory;

@interface CRScriptCategoryResult : NSObject <NSCopying>

@property (readonly) CRScriptCategory *scriptCategory;
@property (readonly) float probability;
@property (readonly) float valid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithScriptCategory:(id)a0 probability:(float)a1;

@end
