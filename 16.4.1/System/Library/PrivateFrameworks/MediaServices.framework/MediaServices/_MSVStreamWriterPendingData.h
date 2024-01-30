@class NSData;

@interface _MSVStreamWriterPendingData : NSObject

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) long long bytesWritten;

- (void).cxx_destruct;

@end
