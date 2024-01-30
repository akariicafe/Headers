@class NSString;

@interface STSExpressEventInfoWithIdentifiers : STSExpressEventInfo

@property (readonly, nonatomic) NSString *appletIdentifier;
@property (readonly, nonatomic) NSString *keyIdentifier;

- (void).cxx_destruct;
- (id)initWithState:(unsigned int)a0 appletIdentifier:(id)a1 keyIdentifier:(id)a2;

@end
