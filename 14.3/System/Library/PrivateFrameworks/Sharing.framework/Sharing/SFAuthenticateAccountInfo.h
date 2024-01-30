@class NSString;

@interface SFAuthenticateAccountInfo : NSObject

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) NSString *altDSID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned int)a0 altDSID:(id)a1;

@end
