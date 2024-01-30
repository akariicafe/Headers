@class NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MFScannedDocumentConverter : NSObject <EFLoggable> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
