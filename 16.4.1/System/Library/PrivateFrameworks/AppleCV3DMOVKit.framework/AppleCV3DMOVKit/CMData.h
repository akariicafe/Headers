@class NSData, NSString;

@interface CMData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *additionalData;
@property (retain, nonatomic) NSString *sourcePeerDisplayName;
@property (nonatomic) BOOL isSent;

+ (id)classes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 timestamp:(double)a1 isSent:(BOOL)a2;

@end
