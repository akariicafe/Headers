@class NSArray, NSString;

@interface FKTextFeature : NSObject {
    union { int seqInd; int ccInd; } _backingIndex;
    struct FKSession { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; unsigned int x9; char x10[128]; struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } x11; struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } x12; struct *x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; struct *x18; unsigned short *x19; int x20; int x21; struct concomp *x22; int x23; int x24; int x25; int x26; int x27; int x28; struct sequence *x29; int x30; int x31; int x32; int x33; unsigned char x34; struct recognizer *x35; } *_session;
    int _scale;
}

@property (retain, nonatomic) NSArray *subFeatures;
@property (copy, nonatomic) NSString *text;
@property float confidence;
@property (readonly, nonatomic) long long featureID;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly, retain, nonatomic) NSArray *corners;
@property (readonly, nonatomic) long long type;
@property (readonly) NSArray *candidates;

+ (id)featureFromConcompIndex:(int)a0 session:(struct FKSession { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; unsigned int x9; char x10[128]; struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } x11; struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } x12; struct *x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; struct *x18; unsigned short *x19; int x20; int x21; struct concomp *x22; int x23; int x24; int x25; int x26; int x27; int x28; struct sequence *x29; int x30; int x31; int x32; int x33; unsigned char x34; struct recognizer *x35; } *)a1 scaling:(struct { struct CGSize { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; int x2; } *)a2 type:(long long)a3 createDiacriticFeatures:(BOOL)a4 featureID:(long long *)a5;
+ (id)featureFromSequenceIndex:(int)a0 session:(struct FKSession { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; unsigned int x9; char x10[128]; struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } x11; struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } x12; struct *x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; struct *x18; unsigned short *x19; int x20; int x21; struct concomp *x22; int x23; int x24; int x25; int x26; int x27; int x28; struct sequence *x29; int x30; int x31; int x32; int x33; unsigned char x34; struct recognizer *x35; } *)a1 scaling:(struct { struct CGSize { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; int x2; } *)a2 createConcompFeatures:(BOOL)a3 createDiacriticFeatures:(BOOL)a4 featureID:(long long *)a5;

- (void)dealloc;
- (id)initWithType:(long long)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 corners:(id)a2 featureID:(long long)a3 session:(struct FKSession { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; unsigned int x9; char x10[128]; struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } x11; struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } x12; struct *x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; struct *x18; unsigned short *x19; int x20; int x21; struct concomp *x22; int x23; int x24; int x25; int x26; int x27; int x28; struct sequence *x29; int x30; int x31; int x32; int x33; unsigned char x34; struct recognizer *x35; } *)a4 backingIndex:(union { int x0; int x1; })a5 scale:(int)a6;

@end
