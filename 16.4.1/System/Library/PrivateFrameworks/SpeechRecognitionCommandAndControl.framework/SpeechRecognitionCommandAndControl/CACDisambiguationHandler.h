@class NSArray;

@interface CACDisambiguationHandler : NSObject

@property (retain) NSArray *labeledElements;
@property (copy, nonatomic) id /* block */ chosenLabeledElementHandler;

- (void).cxx_destruct;
- (void)handleChosenLabeledElement:(id)a0;
- (id)initWithLabeledElements:(id)a0;

@end
