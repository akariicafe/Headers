@class NSString;

@interface BRAccountTokenWillChangeObserver : NSObject

@property (readonly, nonatomic) NSString *personaID;

- (id)initWithPersonaID:(id)a0;
- (void)_accountWillChange;
- (void).cxx_destruct;

@end
