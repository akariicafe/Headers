@class NSArray;

@interface CACDisambiguationHandler : NSObject

@property (retain) NSArray *labeledElements;
@property (copy, nonatomic) id /* block */ chosenLabeledElementHandler;

- (void).cxx_destruct;
- (id)initWithLabeledElements:(id)a0;
- (void)handleChosenLabeledElement:(id)a0;

@end
