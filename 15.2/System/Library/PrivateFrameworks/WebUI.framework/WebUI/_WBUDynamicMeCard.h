@class NSMutableArray, CNContact;

@interface _WBUDynamicMeCard : NSObject {
    NSMutableArray *_blocksPendingMeCard;
    CNContact *_me;
}

@property (readonly, nonatomic) BOOL meCardExists;

+ (id)_contactObjectComponentForString:(id)a0;

- (id)me;
- (void).cxx_destruct;
- (id)init;
- (void)performWhenReady:(id /* block */)a0;
- (void)_meCardChanged:(id)a0;
- (void)_fetchContactKeysWithHandler:(id /* block */)a0;
- (id)valueForProperty:(id)a0 contact:(id)a1;

@end
