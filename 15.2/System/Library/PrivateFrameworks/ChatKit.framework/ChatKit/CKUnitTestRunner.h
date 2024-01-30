@class NSString, IMUnitTestRunner, NSFileHandle;

@interface CKUnitTestRunner : NSObject <IMUnitTestRunnerDelegate>

@property (retain, nonatomic) IMUnitTestRunner *runner;
@property (nonatomic) BOOL shouldWrite;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
