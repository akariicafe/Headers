@interface _GCGearShifterElementtConfiguration : _GCDevicePhysicalInputElementConfiguration {
    BOOL _patternShifter;
    long long _gamepadEventShifterValueField;
    struct _NSRange { unsigned long long location; unsigned long long length; } _positionRange;
}

- (id)init;

@end
