@class NSMethodSignature, NSString;

@interface CLIntersiloInterfaceSelectorInfo : NSObject

@property (readonly, nonatomic) SEL sel;
@property (readonly, nonatomic) int replyBlockIndex;
@property (readonly, nonatomic) int returnAddressIndex;
@property (readonly, retain, nonatomic) NSMethodSignature *sig;
@property (readonly, copy, nonatomic) NSString *typeStr;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSelector:(SEL)a0 andMethodSignature:(id)a1;
- (id)typeStr;

@end
