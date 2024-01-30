@class NSString, NSError;

@interface BTAudioRoutingResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int action;
@property (nonatomic) unsigned int clientID;
@property (copy, nonatomic) NSString *deviceAddress;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *reason;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
