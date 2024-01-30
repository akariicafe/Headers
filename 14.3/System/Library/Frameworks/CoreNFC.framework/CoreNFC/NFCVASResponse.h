@class NSData;

@interface NFCVASResponse : NSObject <NSCopying>

@property (readonly, nonatomic) long long status;
@property (readonly, retain, nonatomic) NSData *vasData;
@property (readonly, retain, nonatomic) NSData *mobileToken;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStatus:(long long)a0 data:(id)a1 mobileToken:(id)a2;

@end
