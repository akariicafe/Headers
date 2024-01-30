@interface PXFeedbackFileRadarViewController : UINavigationController

@property (readonly, nonatomic) unsigned long long collectionType;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)initWithCollectionType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_handleUserCancel:(id)a0;
- (void)_handleUserConfirmation;
- (void)_handleRadarFiledWithError:(id)a0;
- (void)_handleCompletion;

@end
