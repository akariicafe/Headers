@class NSError, NSMutableDictionary, NSDate;

@interface BRCTransferFailureReport : NSObject

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDate *lastFailureDate;
@property (readonly, nonatomic) NSMutableDictionary *privateDBErrorCountByPCSState;
@property (readonly, nonatomic) NSMutableDictionary *shareDBErrorCountByPCSState;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithError:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setLastFailureDate:(id)a0;
- (BOOL)isEqualToTransferFailureReport:(id)a0;
- (void)encounteredErrorWithPCSState:(unsigned int)a0 privateDB:(BOOL)a1 atDate:(id)a2;
- (void)encounteredErrors:(unsigned long long)a0 atDate:(id)a1;

@end
