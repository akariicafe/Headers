@interface _GCSetValueEvent : NSObject {
    double timestamp;
    BOOL pressed;
    BOOL consumed;
    BOOL ignoredByLongPressRecognizer;
    BOOL ignoredByMultiPressRecognizer;
}

@end
