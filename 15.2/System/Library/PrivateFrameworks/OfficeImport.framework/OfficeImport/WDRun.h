@class WDParagraph;

@interface WDRun : NSObject

@property (readonly, weak) WDParagraph *paragraph;

- (void)clearProperties;
- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (int)runType;
- (id)initWithParagraph:(id)a0;

@end
