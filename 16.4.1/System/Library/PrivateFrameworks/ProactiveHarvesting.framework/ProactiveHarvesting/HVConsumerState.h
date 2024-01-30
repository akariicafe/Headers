@interface HVConsumerState : NSObject

@property (nonatomic) unsigned char levelOfService;
@property (nonatomic) unsigned int documentsConsumed;
@property (nonatomic) unsigned int documentsIgnored;
@property (nonatomic) unsigned int numberOfExtractions;
@property (nonatomic) unsigned int numberOfInterruptions;
@property (nonatomic) unsigned int errorsReported;

- (id)init;
- (id)description;

@end
