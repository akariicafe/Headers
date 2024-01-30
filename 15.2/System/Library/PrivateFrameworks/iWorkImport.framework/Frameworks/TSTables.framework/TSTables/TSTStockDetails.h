@class NSString;

@interface TSTStockDetails : NSObject

@property (retain, nonatomic) NSString *symbol;
@property (nonatomic) long long attribute;

+ (id)detailsWithSymbol:(id)a0 attribute:(long long)a1;

- (void).cxx_destruct;
- (id)initWithSymbol:(id)a0 attribute:(long long)a1;
- (BOOL)isEqualToStockDetails:(id)a0;

@end
