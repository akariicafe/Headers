@class NSString, NSDictionary, NSData, NSNumber;

@interface CRChallengeResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *componentType;
@property (retain, nonatomic) NSString *identifer;
@property (retain, nonatomic) NSData *signedResponse;
@property (retain, nonatomic) NSNumber *keyIndex;
@property (retain, nonatomic) NSDictionary *properties;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithComponentType:(id)a0 identifer:(id)a1 signedResponse:(id)a2 keyIndex:(id)a3 properties:(id)a4;

@end
