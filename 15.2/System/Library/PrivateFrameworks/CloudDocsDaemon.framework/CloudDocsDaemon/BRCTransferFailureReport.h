@class NSError, NSMutableDictionary, NSDate;

@interface BRCTransferFailureReport : NSObject

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDate *lastFailureDate;
@property (readonly, nonatomic) NSMutableDictionary *privateDBErrorCountByPCSState;
@property (readonly, nonatomic) NSMutableDictionary *shareDBErrorCountByPCSState;

- (id)initWithError:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToTransferFailureReport:(id)a0;
- (void)encounteredErrorWithPCSState:(unsigned int)a0 privateDB:(BOOL)a1 atDate:(id)a2;

@end
