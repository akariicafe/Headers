@class NSArray, PHMemory;

@interface PXMemoriesInlineProblemReporter : NSObject

@property (retain, nonatomic) PHMemory *memory;
@property (retain, nonatomic) NSArray *features;

- (void).cxx_destruct;
- (id)_headerText;
- (id)_disclaimerText;
- (id)_infoText;
- (id)_reportStringForFeatures;
- (id)feedbackMailViewController;
- (id)initWithMemory:(id)a0 features:(id)a1;

@end
