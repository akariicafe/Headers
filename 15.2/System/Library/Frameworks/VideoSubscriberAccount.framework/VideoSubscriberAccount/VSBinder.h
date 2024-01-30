@class NSCountedSet, NSMutableDictionary;

@interface VSBinder : NSObject

@property (readonly, weak, nonatomic) id boundObject;
@property (nonatomic, getter=isEstablishmentProhibited) BOOL establishmentProhibited;
@property (retain, nonatomic) NSCountedSet *currentlyChangingBindings;
@property (retain, nonatomic) NSMutableDictionary *establishedBindings;

- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)tearDownBinding:(id)a0;
- (id)_infoForBinding:(id)a0;
- (id)valueForBinding:(id)a0;
- (id)initWithBoundObject:(id)a0;
- (void)establishBinding:(id)a0 withInfo:(id)a1;
- (void)setValue:(id)a0 forBinding:(id)a1;

@end
