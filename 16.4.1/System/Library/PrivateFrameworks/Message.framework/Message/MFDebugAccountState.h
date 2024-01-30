@class NSString, NSArray, MailAccount;

@interface MFDebugAccountState : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *lastKnownCapabilities;
@property (retain, nonatomic) MailAccount *mailAccount;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithStateEventDictionary:(id)a0 identifier:(id)a1 lastKnownCapabilities:(id)a2;

@end
