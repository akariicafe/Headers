@class NSArray, NSDictionary;

@interface BWFrameStatisticsByPortType : NSObject <NSFastEnumeration, NSSecureCoding> {
    NSArray *_portTypes;
    NSDictionary *_portTypeToFrameStatistics;
    struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; double x7; unsigned int x8; unsigned int x9; unsigned int x10; float x11; float x12; float x13; double x14; unsigned int x15; unsigned int x16; unsigned int x17; BOOL x18; BOOL x19; BOOL x20; int x21; BOOL x22; float x23; int x24; BOOL x25; int x26; int x27; int x28; int x29; float x30; float x31; unsigned int x32; float x33; int x34; } *_frameStatisticsStoragesForPortTypes;
    unsigned long long _frameCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *portTypes;
@property (readonly, nonatomic) unsigned long long frameCount;

+ (void)initialize;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (void)reset;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)_setFrameCount:(unsigned long long)a0;
- (void)updateWithFrameMetadata:(id)a0 updateFocusDistance:(BOOL)a1;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPortTypes:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
