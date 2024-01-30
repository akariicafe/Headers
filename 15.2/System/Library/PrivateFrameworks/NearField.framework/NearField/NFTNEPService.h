@class NSString;

@interface NFTNEPService : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *uri;
@property (nonatomic) unsigned char minWaitTime;
@property (nonatomic) unsigned char maxWaitTimeExtension;
@property (nonatomic) unsigned short maxMessageSize;

+ (id)serviceWithURI:(id)a0 minWaitTime:(unsigned char)a1 maxWaitTimeExtension:(unsigned char)a2 maxMessageSize:(unsigned short)a3;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
