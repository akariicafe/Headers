@interface CLRegionInternal : NSObject {
    struct { char identifier[512]; char onBehalfOfIdentifier[512]; int type; BOOL notifyOnEntry; BOOL notifyOnExit; BOOL conservativeEntry; BOOL emergency; union { struct { char proximityUUID[512]; unsigned short major; unsigned short minor; int definitionMask; BOOL notifyEntryStateOnDisplay; } beaconAttributes; struct { struct { double latitude; double longitude; } center; double radius; double desiredAccuracy; int referenceFrame; BOOL allowMonitoringWhileNearby; BOOL lowPower; } circularAttributes; struct { struct { double latitude; double longitude; } vertices[101]; int verticesCount; int referenceFrame; BOOL allowMonitoringWhileNearby; } polygonalAttributes; } ; } _clientRegion;
}

@end
