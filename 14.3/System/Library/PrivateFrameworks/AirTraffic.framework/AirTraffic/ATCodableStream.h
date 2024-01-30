@class MSVStreamWriter, MSVStreamReader, NSFileHandle, NSInputStream, NSObject;
@protocol OS_dispatch_queue;

@interface ATCodableStream : NSObject <NSSecureCoding> {
    MSVStreamReader *_reader;
    MSVStreamWriter *_writer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) NSFileHandle *fileHandleForReading;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInputStream:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
