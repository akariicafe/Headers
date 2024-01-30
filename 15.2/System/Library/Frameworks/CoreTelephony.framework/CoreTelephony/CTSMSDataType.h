@class NSNumber, NSData;

@interface CTSMSDataType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) NSNumber *transport;
@property (nonatomic) NSNumber *ctFormat;
@property (nonatomic) BOOL parseSMSC;
@property (nonatomic) BOOL waitForAck;
@property (retain, nonatomic) NSData *hexPdu;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToCTSMSDataType:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
