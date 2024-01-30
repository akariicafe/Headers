@protocol TUHandleContactProvider;

@interface TUIntentController : NSObject

@property (readonly, nonatomic) id<TUHandleContactProvider> contactProvider;

+ (id)tu_INPersonHandleForTUHandle:(id)a0 label:(id)a1;
+ (long long)tu_INPersonHandleTypeForTUHandleType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithContactProvider:(id)a0;
- (id)personsByHandleForHandles:(id)a0;
- (id)startCallIntentByHandleForHandles:(id)a0 capability:(long long)a1 destinationType:(long long)a2;
- (id)voicemailStartCallIntentByHandleForHandles:(id)a0;

@end
