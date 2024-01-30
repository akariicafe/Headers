@class NSString, WDCharacterProperties;

@interface WDMath : WDRun

@property (nonatomic) int justification;
@property (retain, nonatomic) WDCharacterProperties *properties;
@property (readonly, nonatomic) NSString *xmlBlob;

- (void).cxx_destruct;
- (void)clearProperties;
- (id)description;
- (int)runType;
- (id)initWithParagraph:(id)a0 xmlBlob:(id)a1;

@end
