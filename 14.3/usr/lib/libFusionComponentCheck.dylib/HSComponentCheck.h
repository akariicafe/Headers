@interface HSComponentCheck : NSObject {
    unsigned long long currentContext;
}

+ (unsigned long long)getContext;
+ (void)setContext:(unsigned long long)a0;
+ (id)sharedSingleton;

- (id)init;
- (id)createChallenge;
- (id)generateSignedKETS:(id)a0 status:(id)a1 errorStr:(id)a2;
- (id)calculateSHA512:(id)a0;
- (int)processComponentCheckCommand:(id)a0 response:(id *)a1;

@end
