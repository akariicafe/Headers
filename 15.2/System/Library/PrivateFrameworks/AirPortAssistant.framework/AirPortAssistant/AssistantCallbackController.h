@interface AssistantCallbackController : NSObject <AssistantCallbackUIDelegateResult> {
    BOOL _saveScanState;
    struct AssistantCallbackContext { unsigned int x0; struct AssistantContext *x1; int x2; struct __CFDictionary *x3; int x4; id x5; id x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; void *x8; long long x9; } *_callbackContext;
}

@property (retain, nonatomic) id uiDelegate;

+ (int)updateKeychainNetworkPassword:(id)a0 forNetworkNamed:(id)a1;
+ (int)updateKeychainBasePassword:(id)a0 forMACAddress:(id)a1 withBaseName:(id)a2;
+ (id)keychainPasswordForBaseStation:(id)a0;
+ (void)keychainPasswordForBaseStation:(id)a0 delegate:(id)a1;
+ (int)removeKeychainPasswordForBaseStation:(id)a0;

- (id)init;
- (void)dealloc;
- (void /* function */ *)assistantCallback;
- (void)userResponseToJoinNetwork:(int)a0;
- (void)userResponseToWarning:(int)a0;
- (void)userResponseToPPPoECredsFailed:(int)a0;
- (void)callbackAskUserForPasswordResult:(int)a0 password:(id)a1 remember:(int)a2;
- (void)callbackAskUserToChooseFromStringListResult:(int)a0 selectedString:(id)a1;
- (void)callbackAskUserAQuestionResult:(int)a0 result:(int)a1;
- (int)subclassAssistantCallback:(struct AssistantCallbackContext { unsigned int x0; struct AssistantContext *x1; int x2; struct __CFDictionary *x3; int x4; id x5; id x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; void *x8; long long x9; } *)a0;
- (int)startScanForNetworks:(id)a0 wifiType:(int)a1 mergeResults:(BOOL)a2 maxAge:(unsigned long long)a3;
- (int)startJoinNetwork:(id)a0 password:(id)a1 rememberChoice:(int)a2;
- (void)joinNetworkDone:(id)a0;
- (void)scanForNetworksDone:(id)a0;
- (int)assistantCallback:(struct AssistantCallbackContext { unsigned int x0; struct AssistantContext *x1; int x2; struct __CFDictionary *x3; int x4; id x5; id x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; void *x8; long long x9; } *)a0 withSelector:(int)a1;

@end
