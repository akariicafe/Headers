@class ATCodableStream, NSDictionary, NSInputStream;

@interface ATMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATCodableStream *stream;
@property (nonatomic) unsigned int messageID;
@property (nonatomic) unsigned int sessionID;
@property (retain, nonatomic) NSDictionary *parameters;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSInputStream *dataStream;
@property (nonatomic) unsigned int options;

- (void).cxx_destruct;
- (id)parameterForKey:(id)a0;
- (id)additionalDescription;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
