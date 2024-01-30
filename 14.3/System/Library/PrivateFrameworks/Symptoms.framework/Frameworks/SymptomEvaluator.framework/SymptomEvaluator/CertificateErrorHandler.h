@class NSString, NSMutableDictionary, NSMutableArray;

@interface CertificateErrorHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {
    NSMutableDictionary *_banned;
    NSMutableArray *_store;
    BOOL _disabled;
    id _resetObserver;
}

@property (nonatomic) unsigned int maxAge;
@property (nonatomic) unsigned int maxCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (BOOL)noteSymptom:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (id)init;
- (void)_reset:(id)a0;
- (void).cxx_destruct;
- (int)configureInstance:(id)a0;
- (id)evaluate:(id)a0 forThreshold:(long long)a1;

@end
