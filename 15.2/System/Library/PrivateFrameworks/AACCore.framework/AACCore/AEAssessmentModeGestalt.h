@class NSURL;
@protocol AESystemNotificationPrimitives, AEFileSystemPrimitives, AEObservation;

@interface AEAssessmentModeGestalt : NSObject

@property (readonly, nonatomic) NSURL *assessmentFileURL;
@property (readonly, nonatomic) id<AESystemNotificationPrimitives> systemNotificationPrimitives;
@property (readonly, nonatomic) id<AEFileSystemPrimitives> fileSystemPrimitives;
@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) id<AEObservation> stateChangeNotificationObservation;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithSystemNotificationPrimitives:(id)a0 fileSystemPrimitives:(id)a1 assessmentFileURL:(id)a2;

@end
