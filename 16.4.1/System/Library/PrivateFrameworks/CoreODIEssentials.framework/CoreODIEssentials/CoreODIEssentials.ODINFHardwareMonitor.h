@interface CoreODIEssentials.ODINFHardwareMonitor : NSObject <NFHardwareEventListener> {
    void /* unknown type, empty encoding */ continuation;
    void /* unknown type, empty encoding */ dispatchQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)hardwareStateDidChange;

@end
