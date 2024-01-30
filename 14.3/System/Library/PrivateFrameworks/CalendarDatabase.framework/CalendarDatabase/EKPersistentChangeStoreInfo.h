@class NSString;

@interface EKPersistentChangeStoreInfo : NSObject

@property (nonatomic) int minConsumedSequenceNumber;
@property (retain, nonatomic) NSString *minConsumedClientIdentifier;
@property (nonatomic) int secondMinConsumedSequenceNumber;

- (void).cxx_destruct;
- (id)description;

@end
