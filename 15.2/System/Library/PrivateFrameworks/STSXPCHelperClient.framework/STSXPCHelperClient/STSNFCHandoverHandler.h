@class NSMutableData, NSData;

@interface STSNFCHandoverHandler : NSObject {
    NSMutableData *_apduBuffer;
    NSData *_responseBuffer;
    unsigned long long _readIndex;
}

- (void).cxx_destruct;
- (id)init;

@end
