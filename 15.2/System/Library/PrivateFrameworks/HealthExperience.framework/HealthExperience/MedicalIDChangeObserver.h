@protocol MedicalIDChangeObserverDelegate;

@interface MedicalIDChangeObserver : NSObject {
    int _medicalIDChangedToken;
}

@property (weak, nonatomic) id<MedicalIDChangeObserverDelegate> delegate;

- (void)startObservingChanges;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
