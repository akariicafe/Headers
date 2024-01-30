@class TSSStyle, TSSPropertyMap;

@interface TSTConcurrentStylesheetKey : NSObject

@property (retain, nonatomic) TSSStyle *style;
@property (retain, nonatomic) TSSPropertyMap *propertyMap;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithStyle:(id)a0 andPropertyMap:(id)a1;

@end
