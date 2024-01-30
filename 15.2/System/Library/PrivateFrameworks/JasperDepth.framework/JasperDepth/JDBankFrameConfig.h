@class NSData;

@interface JDBankFrameConfig : NSObject

@property (readonly) int bankId;
@property (readonly) NSData *frameConfig;

- (void).cxx_destruct;
- (id)initWithBankId:(int)a0 andFrameConfig:(id)a1;

@end
