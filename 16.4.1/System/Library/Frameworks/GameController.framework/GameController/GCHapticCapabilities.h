@class GCHapticCapabilityGraph, NSArray, GCDeviceHaptics, NSString, GCController;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface GCHapticCapabilities : NSObject <NSSecureCoding, GCDeviceHapticCapabilityInfo> {
    NSArray *_hapticEnginesInfo;
    GCController *_controller;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) GCHapticCapabilityGraph *capabilityGraph;
@property (copy) NSArray *hapticEngines;
@property (readonly, nonatomic) BOOL initialized;
@property (readonly) GCDeviceHaptics *deviceHaptics;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setController:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 hapticEnginesInfo:(id)a1 hapticCapabilityGraph:(id)a2;
- (void)initializeHapticEngines;
- (void)removeHapticEngines;

@end
