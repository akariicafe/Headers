@class NSString, NSData, NSMutableData, NSInputStream;

@interface _CATRemoteConnectionSendDataWithStreamContext : NSObject <_CATRemoteConnectionSendContext> {
    NSMutableData *mBuffer;
    NSData *mHeaderData;
    unsigned long long mBytesRead;
}

@property (readonly, copy, nonatomic) NSInputStream *stream;
@property (readonly, nonatomic) unsigned long long dataLength;
@property (readonly, nonatomic) unsigned long long bufferSize;
@property (readonly, nonatomic) id userInfo;
@property (readonly, nonatomic) BOOL hasBytesRemaining;
@property (nonatomic) unsigned long long bytesWritten;
@property (readonly, nonatomic) unsigned long long clientBytesWritten;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
