@class NSArray, PHMemory;

@interface PXMemoriesInlineProblemReporter : NSObject

@property (retain, nonatomic) PHMemory *memory;
@property (retain, nonatomic) NSArray *features;

- (id)_disclaimerText;
- (void).cxx_destruct;
- (id)initWithMemory:(id)a0 features:(id)a1;
- (id)_headerText;
- (id)feedbackMailViewController;
- (id)_reportStringForFeatures;
- (id)_infoText;

@end
