@class NSString;
@protocol SFFeedbackListener;

@interface SearchUIMapsViewController : _MKPlaceViewController <_MKPlaceViewControllerFeedbackDelegate>

@property (weak) id<SFFeedbackListener> feedbackListener;
@property (readonly) unsigned long long queryId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)placeViewController:(id)a0 shouldLogFeedbackOfType:(int)a1;
- (id)initWithMapsData:(id)a0 feedbackListener:(id)a1 queryId:(unsigned long long)a2;

@end
