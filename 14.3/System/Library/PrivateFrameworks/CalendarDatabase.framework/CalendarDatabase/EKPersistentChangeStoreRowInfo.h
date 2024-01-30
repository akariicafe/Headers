@class NSString;

@interface EKPersistentChangeStoreRowInfo : NSObject

@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) int consumedSequenceNumber;

- (void).cxx_destruct;
- (id)description;

@end
