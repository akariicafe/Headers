@interface TSAPdfTaggerParagraphContext : TSAPdfTaggerContext

@property (readonly, nonatomic) BOOL needsSpans;

- (id)initWithStateOfTagger:(id)a0 needsSpans:(BOOL)a1;

@end
