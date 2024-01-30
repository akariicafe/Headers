@class NSData;

@interface MEEncodedOutgoingMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *rawData;
@property (readonly, nonatomic) BOOL isSigned;
@property (readonly, nonatomic) BOOL isEncrypted;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRawData:(id)a0 isSigned:(BOOL)a1 isEncrypted:(BOOL)a2;

@end
