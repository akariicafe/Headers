@class NSString;

@interface iPodControlResultHandler : NSObject <VSRecognitionResultHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)requiresThreadedProcessing;
- (id)actionForRecognitionResult:(id)a0;

@end
