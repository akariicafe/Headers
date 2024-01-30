@class NSString, CLRegionInternal;

@interface CLRegion : NSObject <NSCopying, NSSecureCoding> {
    CLRegionInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { char x0[512]; char x1[512]; int x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; union { struct { char x0[512]; unsigned short x1; unsigned short x2; int x3; BOOL x4; } x0; struct { struct { double x0; double x1; } x0; double x1; double x2; int x3; BOOL x4; BOOL x5; } x1; struct { struct { double x0; double x1; } x0[101]; int x1; int x2; BOOL x3; } x2; } x7; } clientRegion;
@property (copy, nonatomic) NSString *onBehalfOfBundleId;
@property (nonatomic) BOOL conservativeEntry;
@property (nonatomic) int referenceFrame;
@property (nonatomic) BOOL emergency;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } center;
@property (readonly, nonatomic) double radius;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL notifyOnEntry;
@property (nonatomic) BOOL notifyOnExit;

- (id)_initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)_encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initCircularRegionWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 identifier:(id)a2;
- (BOOL)containsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)initWithClientRegion:(struct { char x0[512]; char x1[512]; int x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; union { struct { char x0[512]; unsigned short x1; unsigned short x2; int x3; BOOL x4; } x0; struct { struct { double x0; double x1; } x0; double x1; double x2; int x3; BOOL x4; BOOL x5; } x1; struct { struct { double x0; double x1; } x0[101]; int x1; int x2; BOOL x3; } x2; } x7; })a0;
- (void)encodeWithCoder:(id)a0;

@end
