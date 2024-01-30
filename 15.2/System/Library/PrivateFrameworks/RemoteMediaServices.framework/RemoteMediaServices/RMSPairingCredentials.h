@interface RMSPairingCredentials : NSObject

@property (nonatomic) unsigned long long requirementType;
@property (nonatomic) unsigned long long characterCount;

- (id)protobuf;
- (id)initWithProtobuf:(id)a0;

@end
