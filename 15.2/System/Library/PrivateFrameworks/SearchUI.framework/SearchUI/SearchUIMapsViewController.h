@class NSString;
@protocol SFFeedbackListener;

@interface SearchUIMapsViewController : MUPlaceViewController <MUPlaceViewControllerFeedbackDelegate>

@property (weak) id<SFFeedbackListener> feedbackListener;
@property (readonly) unsigned long long queryId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)placeViewController:(id)a0 shouldLogFeedbackOfType:(int)a1;
- (void).cxx_destruct;
- (id)initWithMapsData:(id)a0 searchAlongTheRoute:(BOOL)a1 feedbackListener:(id)a2 queryId:(unsigned long long)a3;

@end
