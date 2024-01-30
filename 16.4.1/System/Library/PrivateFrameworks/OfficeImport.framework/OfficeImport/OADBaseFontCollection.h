@class NSString;

@interface OADBaseFontCollection : NSObject

@property (copy, nonatomic) NSString *latinFont;
@property (copy, nonatomic) NSString *eastAsianFont;
@property (copy, nonatomic) NSString *complexScriptFont;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)baseFontForId:(int)a0;
- (BOOL)isEqualToBaseFontCollection:(id)a0;
- (void)setBaseFont:(id)a0 forId:(int)a1;

@end
