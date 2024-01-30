@class NSString, NSXPCConnection;

@interface TIPreferencesControllerClient : TIPreferencesController {
    NSXPCConnection *_connection;
    BOOL _writeable;
}

@property (retain, nonatomic) NSString *machName;
@property (nonatomic) BOOL isValid;

+ (id)serviceInterface;
+ (id)sharedPreferencesController;

- (void)forwardInvocation:(id)a0;
- (void)createConnectionIfNecessary;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)performWithWriteability:(BOOL)a0 operations:(id /* block */)a1;
- (void)updateInputModes:(id)a0;
- (void)_pushValue:(id)a0 toPreference:(id)a1 domain:(id)a2;
- (void)_disconnect;

@end
