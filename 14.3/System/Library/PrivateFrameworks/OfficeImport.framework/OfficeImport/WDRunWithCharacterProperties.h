@class WDCharacterProperties;

@interface WDRunWithCharacterProperties : WDRun

@property (retain) WDCharacterProperties *properties;
@property (readonly, getter=isHidden) BOOL hidden;

- (void).cxx_destruct;
- (void)clearProperties;
- (id)initWithParagraph:(id)a0;

@end
