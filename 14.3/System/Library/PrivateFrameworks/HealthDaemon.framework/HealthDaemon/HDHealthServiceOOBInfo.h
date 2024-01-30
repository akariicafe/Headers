@class NSData;

@interface HDHealthServiceOOBInfo : NSObject

@property (readonly, nonatomic) NSData *oobData;
@property (readonly, nonatomic) NSData *randomValue;
@property (readonly, nonatomic) NSData *confirmationValue;
@property (readonly, nonatomic) NSData *btAddress;

+ (id)reverseData:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithOOBData:(id)a0 btAddress:(id)a1;

@end
