@class CRScriptCategory;

@interface CRScriptCategoryResult : NSObject <NSCopying>

@property (readonly) CRScriptCategory *scriptCategory;
@property (readonly) float probability;
@property (readonly) float valid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithScriptCategory:(id)a0 probability:(float)a1;

@end
