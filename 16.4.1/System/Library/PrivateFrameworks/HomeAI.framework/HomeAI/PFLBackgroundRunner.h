@class NSString, HMIDESBackgroundTask;

@interface PFLBackgroundRunner : HMFObject <_DASExtensionRunner, HMFLogging>

@property (retain) HMIDESBackgroundTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)stop;
- (id)init;
- (unsigned char)start;
- (void).cxx_destruct;
- (BOOL)prepareForActivity:(id)a0;
- (BOOL)arrayForKey:(id)a0 info:(id)a1 value:(id *)a2 error:(id *)a3;
- (BOOL)dictionaryForKey:(id)a0 info:(id)a1 value:(id *)a2 error:(id *)a3;
- (id)getAttachmentFromRecipe:(id)a0 name:(id)a1;
- (BOOL)numberForKey:(id)a0 info:(id)a1 value:(id *)a2 error:(id *)a3;
- (id)runSession:(id)a0 jsonResult:(id *)a1 error:(id *)a2;
- (BOOL)stringForKey:(id)a0 info:(id)a1 value:(id *)a2 error:(id *)a3;

@end
