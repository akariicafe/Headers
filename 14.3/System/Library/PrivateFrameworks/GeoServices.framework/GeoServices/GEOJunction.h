@class NSData;

@interface GEOJunction : NSObject <NSSecureCoding> {
    NSData *_elementsData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int maneuverType;
@property (readonly, nonatomic) int drivingSide;
@property (readonly, nonatomic) int junctionType;
@property (readonly, nonatomic) struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *elements;
@property (readonly, nonatomic) unsigned long long numElements;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithStep:(id)a0;
- (id)initWithManeuverType:(int)a0 drivingSide:(int)a1;
- (id)initWithJunctionInfo:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
