@class NSString, NSData;

@interface SpecificRedirectHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {
    NSData *_triggerURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (BOOL)noteSymptom:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (void).cxx_destruct;
- (int)configureInstance:(id)a0;
- (id)evaluate:(id)a0 forThreshold:(long long)a1;

@end
