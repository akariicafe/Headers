@class OADStyleMatrix, OADFontScheme, OADColorScheme;

@interface OADBaseStylesBase : NSObject

@property (retain, nonatomic) OADColorScheme *colorScheme;
@property (retain, nonatomic) OADStyleMatrix *styleMatrix;
@property (retain, nonatomic) OADFontScheme *fontScheme;

- (id)description;
- (void).cxx_destruct;

@end
