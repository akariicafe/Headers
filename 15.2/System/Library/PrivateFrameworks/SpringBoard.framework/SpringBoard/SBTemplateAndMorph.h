@class SBTouchTemplate, SBPolygon;

@interface SBTemplateAndMorph : NSObject

@property (readonly, nonatomic) SBPolygon *morphedCandidate;
@property (readonly, nonatomic) SBTouchTemplate *touchTemplate;

- (void).cxx_destruct;
- (id)initWithTemplate:(id)a0 morph:(id)a1;

@end
