@class NSData;

@interface CKDTrustedTargetKey : NSObject

@property (readonly, nonatomic) NSData *key;

- (id)init;
- (void).cxx_destruct;
- (id)decrypt:(id)a0;
- (id)encrypt:(id)a0;

@end
