@class NSString, NSData, BlastDoorAPSUserPayloadHttpHeaders;

@interface BlastDoorIDSCommandWebTunnelResponse : NSObject {
    void /* unknown type, empty encoding */ iDSCommandWebTunnelResponse;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long command;
@property (nonatomic, readonly) BOOL has_messageId;
@property (nonatomic, readonly) long long messageId;
@property (nonatomic, readonly) NSData *messageUUID;
@property (nonatomic, readonly) BOOL has_responseStatus;
@property (nonatomic, readonly) long long responseStatus;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) BOOL has_epochTimeNanos;
@property (nonatomic, readonly) long long epochTimeNanos;
@property (nonatomic, readonly) NSString *httpUrl;
@property (nonatomic, readonly) BlastDoorAPSUserPayloadHttpHeaders *httpHeaders;
@property (nonatomic, readonly) NSData *httpBody;
@property (nonatomic, readonly) NSString *httpBodyUrl;
@property (nonatomic, readonly) NSData *httpBodyKey;
@property (nonatomic, readonly) BOOL has_httpResponseStatus;
@property (nonatomic, readonly) long long httpResponseStatus;
@property (nonatomic, readonly) NSString *httpErrorMsg;

- (id)init;
- (void).cxx_destruct;

@end
