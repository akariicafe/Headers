@class NSString;

@interface iPodControlResultValidator : NSObject <VSRecognitionResultValidator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)validRecognitionResultFromRecognitionResult:(id)a0;

@end
