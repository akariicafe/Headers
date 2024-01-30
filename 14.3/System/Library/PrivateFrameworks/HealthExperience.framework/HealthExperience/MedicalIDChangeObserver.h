@protocol MedicalIDChangeObserverDelegate;

@interface MedicalIDChangeObserver : NSObject {
    int _medicalIDChangedToken;
}

@property (weak, nonatomic) id<MedicalIDChangeObserverDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startObservingChanges;

@end
