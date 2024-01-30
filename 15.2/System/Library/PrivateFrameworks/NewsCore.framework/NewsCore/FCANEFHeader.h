@class NSData, NSString;

@interface FCANEFHeader : NSObject {
    NSData *_wrappingKeyID;
    NSData *_wrappedKey;
    NSString *_contentType;
    NSData *_headerData;
}

- (void).cxx_destruct;
- (id)init;

@end
