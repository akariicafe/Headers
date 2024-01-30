@class NSString;

@interface MCMError : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) int POSIXerrno;

- (id)initWithLibsystemError:(struct container_error_extended_s { unsigned long long x0; unsigned long long x1; char *x2; int x3; struct container_query_s *x4; struct container_references_s *x5; } *)a0;
- (id)fullDescription;
- (id)initWithErrorType:(unsigned long long)a0;
- (id)initWithNSError:(id)a0 url:(id)a1 defaultErrorType:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithErrorType:(unsigned long long)a0 category:(unsigned long long)a1 path:(id)a2 POSIXerrno:(int)a3;
- (BOOL)isEqualToMCMError:(id)a0;
- (BOOL)isEqual:(id)a0;
- (struct container_error_extended_s { unsigned long long x0; unsigned long long x1; char *x2; int x3; struct container_query_s *x4; struct container_references_s *x5; } *)libsystemError;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithErrorType:(unsigned long long)a0 category:(unsigned long long)a1;
- (void).cxx_destruct;

@end
