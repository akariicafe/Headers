@interface SWDeclareSystemActivityResult : NSObject

@property (readonly, nonatomic) int returnValue;
@property (readonly, nonatomic) unsigned int assertionID;
@property (readonly, nonatomic) int systemState;

- (id)description;
- (id)initWithReturnValue:(int)a0 assertionID:(unsigned int)a1 systemState:(int)a2;

@end
