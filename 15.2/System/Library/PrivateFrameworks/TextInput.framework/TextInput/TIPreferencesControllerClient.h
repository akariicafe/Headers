@class NSString, NSXPCConnection;

@interface TIPreferencesControllerClient : TIPreferencesController {
    NSXPCConnection *_connection;
    BOOL _writeable;
}

@property (retain, nonatomic) NSString *machName;
@property (nonatomic) BOOL isValid;

+ (id)sharedPreferencesController;
+ (id)serviceInterface;

- (void)_disconnect;
- (void)createConnectionIfNecessary;
- (void)updateInputModes:(id)a0;
- (void)performWithWriteability:(BOOL)a0 operations:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)forwardInvocation:(id)a0;
- (void)_pushValue:(id)a0 toPreference:(id)a1 domain:(id)a2;
- (void)dealloc;

@end
