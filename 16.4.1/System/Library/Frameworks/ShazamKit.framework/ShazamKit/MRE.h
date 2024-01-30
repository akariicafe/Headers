@interface MRE : NSObject

@property (nonatomic) void *mreInstance;

- (void)dealloc;
- (BOOL)ConvertException:(const struct exception { void /* function */ **x0; } *)a0 toError:(id *)a1;
- (BOOL)FillUnknownError:(id *)a0;
- (BOOL)ConvertSystemError:(const struct system_error { void /* function */ **x0; struct __libcpp_refstring { char *x0; } x1; struct error_code { int x0; struct error_category *x1; } x2; } *)a0 toError:(id *)a1;
- (id)initWithMREInstance:(void *)a0 error:(id *)a1;
- (id)initWithSignatures:(id)a0 density:(long long)a1 algorithm:(long long)a2 error:(id *)a3;
- (id)search:(id)a0 error:(id *)a1;

@end
