@class NSArray, NSDictionary;

@interface BWFrameStatisticsByPortType : NSObject <NSFastEnumeration, NSSecureCoding> {
    NSArray *_portTypes;
    NSDictionary *_portTypeToFrameStatistics;
    struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; float x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; double x8; unsigned int x9; unsigned int x10; unsigned int x11; float x12; float x13; float x14; double x15; unsigned int x16; unsigned int x17; unsigned int x18; BOOL x19; BOOL x20; BOOL x21; int x22; BOOL x23; float x24; int x25; BOOL x26; int x27; int x28; int x29; int x30; int x31; int x32; float x33; float x34; unsigned int x35; float x36; int x37; BOOL x38; BOOL x39; unsigned short x40; unsigned short x41; unsigned short x42; unsigned short x43; unsigned short x44; unsigned short x45; unsigned short x46; unsigned short x47; unsigned short x48; unsigned int x49; unsigned int x50; } *_frameStatisticsStoragesForPortTypes;
    unsigned long long _frameCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *portTypes;
@property (readonly, nonatomic) unsigned long long frameCount;

+ (void)initialize;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (void)updateWithFrameMetadata:(id)a0 updateFocusDistance:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithPortTypes:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)_setFrameCount:(unsigned long long)a0;
- (id)description;
- (void)reset;

@end
