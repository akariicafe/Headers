@class NSString, NSMutableArray;
@protocol SyndromeHandlerProtocol;

@interface SimpleSyndromeHandler : NSObject <ConfigurableObjectProtocol> {
    double lastReportTime;
    id<SyndromeHandlerProtocol> _nextStage;
    double _lastReportTime;
    NSMutableArray *_resetSources;
    unsigned int _dampeningInterval;
    unsigned int _dampeningStart;
    unsigned int _dampeningIncrement;
    unsigned int _dampeningMax;
}

@property (readonly, nonatomic) NSString *syndromeName;
@property (nonatomic) const char *syndromeUTF8Name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configureClass:(id)a0;
+ (id)objectWithName:(id)a0;
+ (void)setDefaultNextStage:(id)a0;

- (int)read:(id)a0 returnedValues:(id)a1;
- (int)configureInstance:(id)a0;
- (BOOL)_setName:(id)a0;
- (void)didReceiveSyndrome:(id)a0;
- (void).cxx_destruct;
- (void)_reset:(id)a0;

@end
