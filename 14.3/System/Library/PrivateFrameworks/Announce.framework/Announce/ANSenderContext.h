@class NSString;

@interface ANSenderContext : NSObject

@property (retain, nonatomic) NSString *senderCorrelationIdentifier;
@property (nonatomic) BOOL isValidDevice;

- (void).cxx_destruct;
- (id)description;

@end
