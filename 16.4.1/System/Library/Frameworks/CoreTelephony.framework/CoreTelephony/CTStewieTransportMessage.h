@class NSString, NSData, NSDictionary;

@interface CTStewieTransportMessage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *msgId;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDictionary *metadata;

+ (id)allowedSetOfClasses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMsgId:(id)a0;
- (BOOL)isEqualToTransportMessage:(id)a0;

@end
