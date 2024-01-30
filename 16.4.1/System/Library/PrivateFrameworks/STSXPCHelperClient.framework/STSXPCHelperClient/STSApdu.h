@class NSData, NSNumber;

@interface STSApdu : NSObject {
    unsigned char _cls;
    unsigned char _instruction;
    unsigned char _p1;
    unsigned char _p2;
    NSData *_payload;
    NSNumber *_le;
}

- (void).cxx_destruct;

@end
