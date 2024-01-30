@class NSString, NSData;

@interface HAPSecuritySessionDelegateAdditionalDerivedKeyTuple : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSData *saltData;
@property (readonly, nonatomic) NSData *infoData;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 saltData:(id)a1 infoData:(id)a2;

@end
