@class TSSStyle, TSSPropertyMap;

@interface TSTConcurrentStylesheetKey : NSObject

@property (retain, nonatomic) TSSStyle *style;
@property (retain, nonatomic) TSSPropertyMap *propertyMap;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithStyle:(id)a0 andPropertyMap:(id)a1;

@end
