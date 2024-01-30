@class SXUnitConverter, SXDataTableBorder;

@interface SXDataTableBorderSides : SXJSONObject

@property (readonly, nonatomic) SXDataTableBorder *top;
@property (readonly, nonatomic) SXDataTableBorder *right;
@property (readonly, nonatomic) SXDataTableBorder *bottom;
@property (readonly, nonatomic) SXDataTableBorder *left;
@property (retain, nonatomic) SXUnitConverter *unitConverter;

- (void).cxx_destruct;
- (id)borderForValue:(id)a0;
- (id)bottomWithValue:(id)a0 withType:(int)a1;
- (id)leftWithValue:(id)a0 withType:(int)a1;
- (id)rightWithValue:(id)a0 withType:(int)a1;
- (id)topWithValue:(id)a0 withType:(int)a1;

@end
