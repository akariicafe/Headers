@class TRIClient;

@interface PGTrialSession : NSObject

@property (retain, nonatomic) TRIClient *trialClient;

+ (id)newTrialSession;

- (void).cxx_destruct;
- (id)init;
- (id)levelForFactorName:(id)a0 withNamespaceType:(unsigned short)a1;
- (id)dictionaryForFactorName:(id)a0 withNamespaceType:(unsigned short)a1;
- (id)arrayForFactorName:(id)a0 withNamespaceType:(unsigned short)a1;
- (id)namespaceNameForNamespaceType:(unsigned short)a0;

@end
