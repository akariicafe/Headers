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

- (void).cxx_destruct;
- (id)contactsFromBuffer:(id)a0;
- (id)initWithKeyDescriptorToMakeAvailable:(id)a0 mutableResults:(BOOL)a1;

@end
