@class NSData, NSString;

@interface _CATRemoteConnectionSendDataContext : NSObject <_CATRemoteConnectionSendContext> {
    NSData *mEncodedData;
}

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) id userInfo;
@property (readonly, nonatomic) BOOL hasBytesRemaining;
@property (nonatomic) unsigned long long bytesWritten;
@property (readonly, nonatomic) unsigned long long clientBytesWritten;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
