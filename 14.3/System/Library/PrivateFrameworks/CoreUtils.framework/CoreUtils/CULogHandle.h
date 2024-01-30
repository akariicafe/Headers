@class NSString;

@interface CULogHandle : NSObject {
    NSString *_categoryName;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucatPtr;
}

@property (copy, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)initWithSubsystem:(id)a0 category:(id)a1;
- (void)dealloc;
- (id)initWithSubsystem:(id)a0 category:(id)a1 logLevel:(int)a2;
- (id)initWithSubsystem:(id)a0 category:(id)a1 logLevel:(int)a2 logFlags:(unsigned int)a3;
- (id)initWithSubsystem:(id)a0 category:(id)a1 logFlags:(unsigned int)a2;
- (void)ulog:(int)a0 message:(id)a1;
- (void)ulogf:(int)a0 format:(id)a1;
- (void)ulogv:(int)a0 format:(id)a1 args:(char *)a2;

@end
