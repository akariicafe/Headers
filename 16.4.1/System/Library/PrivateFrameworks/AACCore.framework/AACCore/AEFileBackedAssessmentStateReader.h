@class NSURL, NSObject;
@protocol AESystemNotificationPrimitives, AEFileSystemPrimitives, OS_dispatch_queue, AEObservation;

@interface AEFileBackedAssessmentStateReader : NSObject <AEAssessmentStateReading> {
    NSURL *_assessmentFileURL;
    id<AESystemNotificationPrimitives> _systemNotificationPrimitives;
    id<AEFileSystemPrimitives> _fileSystemPrimitives;
    NSObject<OS_dispatch_queue> *_queue;
    id<AEObservation> _stateChangeNotificationObservation;
}

@property (nonatomic, getter=isActive) BOOL active;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSystemNotificationPrimitives:(id)a0 fileSystemPrimitives:(id)a1 assessmentFileURL:(id)a2 queue:(id)a3;

@end
