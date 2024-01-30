@class OSLogEventDecomposedMessage, NSObject;

@interface OSLogEventMessageArgument : NSObject {
    OSLogEventDecomposedMessage *_decomposedMessage;
    struct os_log_fmt_raw_placeholder { void *x0; struct os_log_fmt_cspec_s { char *x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; int x7; int x8; char *x9; char *x10; char *x11; unsigned long long x12; } x1; union { long long x0; unsigned long long x1; double x2; long double x3; } x2; unsigned char x3; unsigned char x4; unsigned short x5; unsigned long long x6; BOOL x7; } *_rawArg;
    unsigned long long _sizeofLong;
}

@property (readonly, nonatomic) unsigned long long availability;
@property (readonly, nonatomic) unsigned long long privacy;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) unsigned long long scalarCategory;
@property (readonly, nonatomic) unsigned long long scalarType;
@property (readonly, nonatomic) NSObject *objectRepresentation;
@property (readonly, nonatomic) const void *rawBytes;
@property (readonly, nonatomic) unsigned short rawBytesLength;
@property (readonly, nonatomic) unsigned long long unsignedInt64Value;
@property (readonly, nonatomic) long long int64Value;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, nonatomic) long double longDoubleValue;

- (id)initWithProxy:(id)a0 index:(unsigned long long)a1;

@end
