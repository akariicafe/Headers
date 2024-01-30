@class NSString, NSData;

@interface SiriAnalyticsXPCLargeMessageEnvelope : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *largeMessagePath;
@property (readonly, copy, nonatomic) NSData *serializedDataUploadMessage;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithLargeMessagePath:(id)a0 serializedDataUploadMessage:(id)a1;

@end
