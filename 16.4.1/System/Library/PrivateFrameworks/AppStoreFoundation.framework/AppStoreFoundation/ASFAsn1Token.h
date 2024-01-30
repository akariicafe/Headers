@class NSData;

@interface ASFAsn1Token : NSObject {
    unsigned char mClass;
    unsigned long long mIdentifier;
    NSData *mData;
}

- (id)description;
- (void).cxx_destruct;

@end
