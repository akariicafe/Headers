@class NSString;

@interface ANSenderContext : NSObject

@property (retain, nonatomic) NSString *senderCorrelationIdentifier;
@property (nonatomic) BOOL isValidDevice;

- (id)description;
- (void).cxx_destruct;

@end
