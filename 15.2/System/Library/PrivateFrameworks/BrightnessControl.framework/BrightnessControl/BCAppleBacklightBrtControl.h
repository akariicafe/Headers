@interface BCAppleBacklightBrtControl : BCBrtControl {
    unsigned int _backlightService;
    double _minUser;
    double _maxUser;
    double _minMilliAmps;
    double _maxMilliAmps;
    double _maxNitsEDR;
    BOOL _isDFR;
    BOOL _isDCP;
    BOOL _override;
    BOOL _energySaving;
    unsigned long long _thermalMitigation;
    struct { id /* block */ x0; } *_terminationCallback;
    struct IONotificationPort { } *_terminationNotifPort;
    unsigned int _terminationIterator;
}

@property (readonly) unsigned long long registryID;

+ (id)newMonitorWithHandler:(id /* block */)a0 error:(id *)a1;
+ (id)copyAvailableControls;

- (id)ID;
- (id)initWithService:(unsigned int)a0;
- (id)copyProperty:(id)a0 error:(id *)a1;
- (id)init;
- (void)dealloc;
- (id)copyModuleIdentifier;
- (BOOL)setNits:(double)a0 error:(id *)a1;
- (double)getNitsWithError:(id *)a0;
- (BOOL)setProperty:(id)a0 value:(id)a1 error:(id *)a2;
- (void)setDisplayService:(unsigned int)a0;

@end
