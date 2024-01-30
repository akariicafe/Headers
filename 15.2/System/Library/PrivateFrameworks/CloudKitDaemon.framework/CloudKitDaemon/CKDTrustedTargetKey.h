@class NSData;

@interface CKDTrustedTargetKey : NSObject

@property (retain, nonatomic) NSData *key;

- (id)decrypt:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)encrypt:(id)a0;

@end
