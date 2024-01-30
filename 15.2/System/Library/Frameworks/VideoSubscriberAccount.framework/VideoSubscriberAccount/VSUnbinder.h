@class NSMapTable;

@interface VSUnbinder : NSObject

@property (nonatomic, getter=isInvalid) BOOL invalid;
@property (retain, nonatomic) NSMapTable *bindingsByBinder;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)binder:(id)a0 didEstablishBinding:(id)a1;
- (void)binder:(id)a0 didTearDownBinding:(id)a1;

@end
