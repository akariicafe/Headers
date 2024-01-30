@class TSSStyle, TSSPropertyMap;

@interface TSTConcurrentStylesheetKey : NSObject

@property (retain, nonatomic) TSSStyle *style;
@property (retain, nonatomic) TSSPropertyMap *propertyMap;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithStyle:(id)a0 andPropertyMap:(id)a1;

@end
