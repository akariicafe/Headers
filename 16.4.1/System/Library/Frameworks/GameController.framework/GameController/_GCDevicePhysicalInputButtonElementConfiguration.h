@interface _GCDevicePhysicalInputButtonElementConfiguration : _GCDevicePhysicalInputElementConfiguration {
    BOOL _analog;
    float _pressedThreshold;
    long long _gamepadEventPressedValueField;
}

- (id)init;

@end
