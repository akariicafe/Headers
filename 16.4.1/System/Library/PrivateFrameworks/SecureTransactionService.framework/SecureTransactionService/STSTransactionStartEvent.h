@class NSString, STSCredential;

@interface STSTransactionStartEvent : NSObject

@property (retain, nonatomic) STSCredential *credential;
@property (nonatomic) unsigned short transactionMode;
@property (retain, nonatomic) NSString *spIdentifier;
@property (nonatomic) BOOL background;

- (void).cxx_destruct;
- (id)initWithCredential:(id)a0 andDigitalCarKeyStartEvent:(id)a1;
- (id)initWithCredential:(id)a0 andNearFieldStartEvent:(id)a1;

@end
