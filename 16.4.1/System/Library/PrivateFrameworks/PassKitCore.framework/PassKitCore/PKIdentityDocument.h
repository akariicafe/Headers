@class NSData, DIIdentityDocument;

@interface PKIdentityDocument : NSObject

@property (retain, nonatomic) DIIdentityDocument *wrapped;
@property (readonly, nonatomic) NSData *encryptedData;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDIIdentityDocument:(id)a0;

@end
