@class NSMutableArray, CNContact;

@interface _WBUDynamicMeCard : NSObject {
    NSMutableArray *_blocksPendingMeCard;
    CNContact *_me;
}

@property (readonly, nonatomic) BOOL meCardExists;

+ (id)_contactObjectComponentForString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)me;
- (void)_meCardChanged:(id)a0;
- (id)valueForProperty:(id)a0 contact:(id)a1;
- (void)performWhenReady:(id /* block */)a0;

@end
