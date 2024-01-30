@class NSArray, PHMemory;

@interface PXMemoriesInlineProblemReporter : NSObject

@property (retain, nonatomic) PHMemory *memory;
@property (retain, nonatomic) NSArray *features;

- (void).cxx_destruct;
- (id)_headerText;
- (id)_infoText;
- (id)initWithMemory:(id)a0 features:(id)a1;
- (id)feedbackMailViewController;
- (id)_reportStringForFeatures;
- (id)_disclaimerText;

@end
