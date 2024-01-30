@class WDParagraph;

@interface WDRun : NSObject

@property (readonly, weak) WDParagraph *paragraph;

- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (void)clearProperties;
- (id)description;
- (int)runType;
- (id)initWithParagraph:(id)a0;

@end
