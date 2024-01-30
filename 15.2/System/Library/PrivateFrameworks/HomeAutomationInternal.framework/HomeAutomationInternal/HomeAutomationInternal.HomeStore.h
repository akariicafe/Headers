@interface HomeAutomationInternal.HomeStore : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ latestHomeStore;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ updateQueue;
    void /* unknown type, empty encoding */ syncDataTimeoutInMillisec;
    void /* unknown type, empty encoding */ loadSucceeded;
    void /* unknown type, empty encoding */ syncDataError;
    void /* unknown type, empty encoding */ _homes;
    void /* unknown type, empty encoding */ _zones;
    void /* unknown type, empty encoding */ _rooms;
    void /* unknown type, empty encoding */ _groups;
    void /* unknown type, empty encoding */ _scenes;
    void /* unknown type, empty encoding */ _accessories;
    void /* unknown type, empty encoding */ _services;
}

- (void)handleHomeStoreUpdates;

@end
