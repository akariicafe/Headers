@interface _GCDevicePhysicalInputSwitchElementConfiguration : _GCDevicePhysicalInputElementConfiguration {
    BOOL _sequential;
    BOOL _canWrap;
    long long _gamepadEventPositionField;
    struct _NSRange { unsigned long long location; unsigned long long length; } _positionRange;
}

- (id)init;

@end
