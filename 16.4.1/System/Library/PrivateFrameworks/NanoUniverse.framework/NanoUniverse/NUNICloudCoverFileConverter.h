@class NSObject;
@protocol OS_dispatch_queue;

@interface NUNICloudCoverFileConverter : NSObject <NUNIFileConverter> {
    NSObject<OS_dispatch_queue> *_privateQueue;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)_convertFileAt:(id)a0 to:(id)a1 error:(id *)a2;
- (BOOL)convertFileAt:(id)a0 to:(id)a1 error:(id *)a2;

@end
