@class NSError, NSMutableDictionary, NSDate;

@interface BRCTransferFailureReport : NSObject

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDate *lastFailureDate;
@property (readonly, nonatomic) NSMutableDictionary *privateDBErrorCountByPCSState;
@property (readonly, nonatomic) NSMutableDictionary *shareDBErrorCountByPCSState;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToTransferFailureReport:(id)a0;
- (void)encounteredErrorWithPCSState:(unsigned int)a0 privateDB:(BOOL)a1 atDate:(id)a2;

@end
