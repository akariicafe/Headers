@class NSString, NSObject;
@protocol OS_os_log;

@interface EFFileCompression : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)compressDirectory:(id)a0 shouldCancel:(id /* block */)a1 error:(id *)a2;
+ (BOOL)compressFile:(id)a0 error:(id *)a1;
+ (BOOL)_compressFile:(const char *)a0 error:(id *)a1;
+ (id)_compressionLock;
+ (struct CompressionQueueContext_s { } *)_compressionQueueContext;
+ (BOOL)_doCompressFile:(const char *)a0 errorCode:(long long *)a1;


@end
