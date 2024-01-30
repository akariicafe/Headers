@class NSString, NSObject;
@protocol OS_os_log;

@interface ATXGenericFileBasedCache : NSObject {
    NSObject<OS_os_log> *_loggingHandle;
    NSString *_debugName;
}

@property (readonly, copy, nonatomic) NSString *cacheFilePath;

- (BOOL)storeSecureCodedObject:(id)a0 error:(id *)a1;
- (id)readSecureCodedObjectWithMaxValidAge:(double)a0 allowableClasses:(id)a1 error:(id *)a2;
- (void)evict;
- (id)initWithCacheFilePath:(id)a0 loggingHandle:(id)a1 debugName:(id)a2;
- (id)init;
- (id)readWithMaxValidAge:(double)a0 error:(id *)a1;
- (BOOL)storeData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
