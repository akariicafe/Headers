@class GEOMapItemIdentifier, NSString;

@interface VKTransitLineMarker : NSObject

@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) unsigned long long featureID;
@property (readonly, nonatomic) NSString *shieldText;
@property (readonly, nonatomic) NSString *shieldLocale;
@property (readonly, nonatomic) long long shieldType;
@property (readonly, nonatomic) struct { float r; float g; float b; float a; } shieldColor;
@property (readonly, nonatomic) NSString *labelText;
@property (readonly, nonatomic) NSString *labelLocale;
@property (readonly, nonatomic) void *transitLinkID;

+ (id)markerWithFeature:(struct { struct { id x0; char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned long long x7; BOOL x8; unsigned long long x9; float x10; unsigned long long x11; id x12; int x13; } x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned int x5; float x6; unsigned int x7; unsigned int x8; unsigned int x9; } *)a0 transitLink:(const struct { id x0; unsigned int x1; unsigned int x2; struct _NSRange { unsigned long long x0; unsigned long long x1; } x3; struct *x4; struct *x5; unsigned long long x6; unsigned long long x7; struct _NSRange { unsigned long long x0; unsigned long long x1; } x8; struct _NSRange { unsigned long long x0; unsigned long long x1; } x9; BOOL x10; struct _NSRange { unsigned long long x0; unsigned long long x1; } x11; struct _NSRange { unsigned long long x0; unsigned long long x1; } x12; struct _NSRange { unsigned long long x0; unsigned long long x1; } x13[2]; struct _NSRange { unsigned long long x0; unsigned long long x1; } x14[2]; } *)a1;

- (id)initWithFeature:(struct { struct { id x0; char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned long long x7; BOOL x8; unsigned long long x9; float x10; unsigned long long x11; id x12; int x13; } x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned int x5; float x6; unsigned int x7; unsigned int x8; unsigned int x9; } *)a0 transitLink:(const struct { id x0; unsigned int x1; unsigned int x2; struct _NSRange { unsigned long long x0; unsigned long long x1; } x3; struct *x4; struct *x5; unsigned long long x6; unsigned long long x7; struct _NSRange { unsigned long long x0; unsigned long long x1; } x8; struct _NSRange { unsigned long long x0; unsigned long long x1; } x9; BOOL x10; struct _NSRange { unsigned long long x0; unsigned long long x1; } x11; struct _NSRange { unsigned long long x0; unsigned long long x1; } x12; struct _NSRange { unsigned long long x0; unsigned long long x1; } x13[2]; struct _NSRange { unsigned long long x0; unsigned long long x1; } x14[2]; } *)a1;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (id)description;

@end
