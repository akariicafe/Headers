@class ASFAsn1Token;

@interface ASFAsn1ReceiptToken : NSObject {
    unsigned long long mType;
    unsigned long long mTypeVersion;
    ASFAsn1Token *mContentToken;
}

- (id)description;
- (void).cxx_destruct;

@end
