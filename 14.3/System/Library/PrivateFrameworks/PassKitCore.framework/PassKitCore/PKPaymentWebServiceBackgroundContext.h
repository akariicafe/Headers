@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PKPaymentWebServiceBackgroundContext : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableDictionary *backgroundTaskRecordsByTaskIdentifier;
@property (retain) NSMutableDictionary *backgroundTaskRecordsByRecordName;

+ (id)contextWithArchive:(id)a0;

- (void)archiveAtPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)remainingTasks;
- (void)addBackgroundDownloadRecord:(id)a0 forTaskIdentifier:(unsigned long long)a1;
- (void)addBackgroundDownloadRecord:(id)a0 forRecordName:(id)a1;
- (id)backgroundDownloadRecordForRecordName:(id)a0;
- (id)backgroundDownloadRecordForTaskIdentifier:(unsigned long long)a0;
- (void)removeBackgroundDownloadRecordForTaskIdentifier:(unsigned long long)a0;
- (void)removeBackgroundDownloadRecordForRecordName:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
