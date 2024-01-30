@class NSData, NSMutableData, NSError;

@interface CUReadRequest : NSObject {
    char *_bufferPtr;
    unsigned char _messageUUID[16];
}

@property (retain, nonatomic) NSData *data;
@property (nonatomic) void *bufferBytes;
@property (retain, nonatomic) NSMutableData *bufferData;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long minLength;
@property (nonatomic) unsigned long long maxLength;
@property (readonly, nonatomic) char *messageUUID;
@property (nonatomic) BOOL hasMessageUUID;
@property (nonatomic) unsigned int statusFlags;

- (void).cxx_destruct;

@end
