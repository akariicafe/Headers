@class NSData;

@interface MRESignature : NSObject

@property (readonly, nonatomic) unsigned long long trackID;
@property (readonly, nonatomic) NSData *signatureData;

- (void)dealloc;
- (id)initWithSignatureData:(id)a0 trackID:(unsigned long long)a1;

@end
