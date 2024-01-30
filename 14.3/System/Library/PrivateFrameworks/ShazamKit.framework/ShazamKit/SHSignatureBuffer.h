@class SHSignature, NSMutableArray;

@interface SHSignatureBuffer : NSObject

@property (nonatomic) double maximumSignatureLength;
@property (retain, nonatomic) NSMutableArray *allSignatures;
@property (readonly, nonatomic) SHSignature *nextSignature;
@property (readonly, nonatomic) long long qos;

- (double)length;
- (void).cxx_destruct;
- (id)initWithMaximumSignatureLength:(double)a0 qos:(long long)a1;
- (void)flow:(id)a0 time:(id)a1;
- (void)finishedMatchingSignatureWithID:(id)a0;
- (BOOL)checkFlowError:(id)a0;
- (void)discardOldestSignatureWithID:(id)a0;
- (void)discardAllSignaturesExceptTheLatestAfterMatchingID:(id)a0;

@end
