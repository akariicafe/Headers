@interface _HDWorkoutCondenserBufferDatum : NSObject {
    unsigned char _UUIDBytes[16];
}

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) double value;
@property (readonly, nonatomic) BOOL isSeries;

- (id)init;
- (id)description;
- (id)initWithStartTime:(double)a0 endTime:(double)a1 value:(double)a2 UUIDBytes:(unsigned char[16])a3 series:(BOOL)a4;
- (BOOL)shouldReplaceDatum:(id)a0;

@end
