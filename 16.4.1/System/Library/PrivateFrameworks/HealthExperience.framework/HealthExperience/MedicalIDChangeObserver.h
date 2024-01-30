@protocol MedicalIDChangeObserverDelegate;

@interface MedicalIDChangeObserver : NSObject {
    int _medicalIDChangedToken;
}

@property (weak, nonatomic) id<MedicalIDChangeObserverDelegate> delegate;

- (void)startObservingChanges;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
