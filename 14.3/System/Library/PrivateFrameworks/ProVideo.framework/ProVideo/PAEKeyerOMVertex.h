@class NSNumber;

@interface PAEKeyerOMVertex : NSObject <NSSecureCoding> {
    NSNumber *_lx;
    NSNumber *_mx;
    NSNumber *_rx;
    NSNumber *_bx;
    NSNumber *_ly;
    NSNumber *_my;
    NSNumber *_ry;
    NSNumber *_by;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (float)ly;
- (float)rx;
- (float)by;
- (float)mx;
- (float)bx;
- (float)my;
- (float)ry;
- (id)init;
- (void)setLx:(id)a0;
- (void)dealloc;
- (void)setRx:(id)a0;
- (id)initWithCoder:(id)a0;
- (float)lx;
- (void)setBy:(id)a0;
- (void)setMx:(id)a0;
- (void)setBx:(id)a0;
- (void)setMy:(id)a0;
- (void)setRy:(id)a0;
- (void)setLy:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
