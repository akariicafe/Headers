@class NSData, HMFUnfairLock;

@interface HMIdentifierSaltStore : NSObject {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic) NSData *identifierSalt;
@property (retain, nonatomic) NSData *assistantIdentifierSalt;

- (void).cxx_destruct;
- (id)init;

@end
