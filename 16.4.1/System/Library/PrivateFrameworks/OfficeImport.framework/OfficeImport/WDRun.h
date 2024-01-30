@class WDParagraph;

@interface WDRun : NSObject

@property (readonly, weak) WDParagraph *paragraph;

- (BOOL)isEmpty;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)clearProperties;
- (id)initWithParagraph:(id)a0;
- (int)runType;

@end
