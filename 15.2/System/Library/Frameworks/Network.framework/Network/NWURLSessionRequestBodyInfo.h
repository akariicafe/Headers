@class NSURL, NSInputStream, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_data;

@interface NWURLSessionRequestBodyInfo : NSObject {
    BOOL _streamUsed;
    NSObject<OS_dispatch_data> *_data;
    NSURL *_fileURL;
    NSInputStream *_stream;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _streamOffset;
}

- (void).cxx_destruct;

@end
