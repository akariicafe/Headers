@class NSString, WDCharacterProperties;

@interface WDMath : WDRun

@property (nonatomic) int justification;
@property (retain, nonatomic) WDCharacterProperties *properties;
@property (readonly, nonatomic) NSString *xmlBlob;

- (void)clearProperties;
- (id)description;
- (void).cxx_destruct;
- (int)runType;
- (id)initWithParagraph:(id)a0 xmlBlob:(id)a1;

@end
