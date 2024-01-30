@class NSString, OADFontCollection;

@interface OADFontScheme : NSObject

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) OADFontCollection *majorFont;
@property (readonly, nonatomic) OADFontCollection *minorFont;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)validateFontScheme;
- (id)fontForId:(int)a0;

@end
