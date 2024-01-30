@class NSArray;

@interface MFMessageTransferResult : NSObject

@property (readonly, nonatomic) unsigned long long resultCode;
@property (readonly, nonatomic) NSArray *failedMessages;
@property (readonly, nonatomic) NSArray *transferedMessages;

- (id)debugDescription;
- (void)dealloc;
- (id)initWithResultCode:(unsigned long long)a0 failedMessages:(id)a1 transferedMessage:(id)a2;

@end
