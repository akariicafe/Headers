@class NSString, NSDictionary, NSData, NSNumber;

@interface CRChallengeObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *componentType;
@property (retain, nonatomic) NSData *nonce;
@property (retain, nonatomic) NSNumber *keyIndex;
@property (retain, nonatomic) NSDictionary *properties;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithComponentType:(id)a0 challenge:(id)a1 keyIndex:(id)a2 properties:(id)a3;

@end
