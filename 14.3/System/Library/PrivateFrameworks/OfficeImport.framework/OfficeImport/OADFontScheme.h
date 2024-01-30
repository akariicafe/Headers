@class NSString, OADFontCollection;

@interface OADFontScheme : NSObject

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) OADFontCollection *majorFont;
@property (readonly, nonatomic) OADFontCollection *minorFont;

- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)fontForId:(int)a0;
- (void)validateFontScheme;

@end
