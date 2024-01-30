@class NSString, WDCharacterProperties;

@interface WDMath : WDRun

@property (nonatomic) int justification;
@property (retain, nonatomic) WDCharacterProperties *properties;
@property (readonly, nonatomic) NSString *xmlBlob;

- (id)description;
- (void).cxx_destruct;
- (void)clearProperties;
- (int)runType;
- (id)initWithParagraph:(id)a0 xmlBlob:(id)a1;

@end
