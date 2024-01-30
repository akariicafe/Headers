@protocol BSInvalidatable;

@interface TIKeyboardSecureTouchSlot : NSObject

@property (nonatomic) unsigned int slotID;
@property (nonatomic) unsigned long long authenticationMessageContext;
@property (retain, nonatomic) id<BSInvalidatable> invalidatable;

- (void).cxx_destruct;
- (void)dealloc;

@end
