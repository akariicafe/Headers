@interface _GCSetValueEvent : NSObject {
    double timestamp;
    BOOL pressed;
    BOOL consumed;
    BOOL tentativeSinglePress;
    BOOL ignoredByLongPressRecognizer;
    BOOL ignoredByDoublePressRecognizer;
    BOOL ignoredBySinglePressRecognizer;
}

@end
