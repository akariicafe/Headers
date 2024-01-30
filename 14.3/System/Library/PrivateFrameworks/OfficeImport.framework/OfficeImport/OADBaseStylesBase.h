@class OADStyleMatrix, OADFontScheme, OADColorScheme;

@interface OADBaseStylesBase : NSObject

@property (retain, nonatomic) OADColorScheme *colorScheme;
@property (retain, nonatomic) OADStyleMatrix *styleMatrix;
@property (retain, nonatomic) OADFontScheme *fontScheme;

- (void).cxx_destruct;
- (id)description;

@end
