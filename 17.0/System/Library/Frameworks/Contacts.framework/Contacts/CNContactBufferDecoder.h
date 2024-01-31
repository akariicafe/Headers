@class CNContactKeyVector, NSMutableData, CNMutableContact;

@interface CNContactBufferDecoder : NSObject {
    long long _state;
    CNMutableContact *_pendingContact;
    NSMutableData *_resumeBuffer;
    long long _bytesNeededToResume;
}

@property (nonatomic) BOOL mutableResults;
@property (copy, nonatomic) CNContactKeyVector *keyDescriptorToMakeAvailable;
@property (readonly) BOOL hasPendingContacts;

- (id)initWithKeyDescriptorToMakeAvailable:(id)a0 mutableResults:(BOOL)a1;
- (BOOL)decodeContactsFromBuffer:(id)a0 replyHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
