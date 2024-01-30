@interface DiskImages2 : NSObject

@property (class, nonatomic) BOOL debugLogsEnabled;
@property (class, nonatomic) BOOL forwardLogs;

+ (id)imageURLFromDevice:(id)a0 error:(id *)a1;
+ (BOOL)attachWithParams:(id)a0 handle:(id *)a1 error:(id *)a2;
+ (BOOL)convertWithParams:(id)a0 error:(id *)a1;
+ (BOOL)createBlankWithParams:(id)a0 error:(id *)a1;
+ (BOOL)embedUserDataWithParams:(id)a0 error:(id *)a1;
+ (BOOL)managedAttachWithParams:(id)a0 handle:(id *)a1 error:(id *)a2;
+ (BOOL)retrieveUserDataWithParams:(id)a0 error:(id *)a1;
+ (BOOL)verifyWithParams:(id)a0 error:(id *)a1;

@end
