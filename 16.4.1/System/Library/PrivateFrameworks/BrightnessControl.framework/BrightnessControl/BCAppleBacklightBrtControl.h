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

+ (id)copyAvailableControls;
+ (id)newMonitorWithHandler:(id /* block */)a0 error:(id *)a1;

- (id)initWithService:(unsigned int)a0;
- (id)copyProperty:(id)a0 error:(id *)a1;
- (id)ID;
- (void)dealloc;
- (id)init;
- (void)setDisplayService:(unsigned int)a0;
- (id)copyModuleIdentifier;
- (double)getNitsWithError:(id *)a0;
- (BOOL)setNits:(double)a0 error:(id *)a1;
- (BOOL)setProperty:(id)a0 value:(id)a1 error:(id *)a2;

@end
