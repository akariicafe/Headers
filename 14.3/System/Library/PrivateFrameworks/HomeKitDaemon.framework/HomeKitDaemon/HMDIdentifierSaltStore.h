@class NSData, HMFUnfairLock;

@interface HMDIdentifierSaltStore : NSObject {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic) NSData *identifierSalt;
@property (retain, nonatomic) NSData *assistantIdentifierSalt;

- (id)init;
- (void).cxx_destruct;

@end
