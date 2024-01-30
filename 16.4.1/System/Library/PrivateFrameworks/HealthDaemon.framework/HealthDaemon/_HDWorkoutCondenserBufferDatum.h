@interface _HDWorkoutCondenserBufferDatum : NSObject {
    unsigned char _UUIDBytes[16];
    BOOL _isSeries;
    double _startTime;
    double _endTime;
    double _value;
}

- (id)init;
- (id)description;

@end
