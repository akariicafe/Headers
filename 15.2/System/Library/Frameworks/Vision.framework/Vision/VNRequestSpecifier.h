@class NSString;

@interface VNRequestSpecifier : NSObject <NSCopying, NSSecureCoding, VNRequestSpecifying> {
    unsigned int _requestClassCode;
    unsigned long long _requestRevision;
    NSString *_cachedRequestClassName;
    Class _cachedRequestClass;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int requestClassCode;
@property (readonly, nonatomic) unsigned long long requestRevision;
@property (readonly, copy) NSString *requestClassName;

+ (id)specifierForRequestClass:(Class)a0 revision:(unsigned long long)a1 error:(id *)a2;
+ (id)specifierForRequestClassCode:(unsigned int *)a0 revision:(unsigned long long)a1 error:(id *)a2;
+ (id)specifierForRequestClassName:(id)a0 revision:(unsigned long long)a1 error:(id *)a2;
+ (id)specifierForRequest:(id)a0;

- (BOOL)specifiesRequestClass:(Class)a0 withAnyRevision:(unsigned long long)a1;
- (BOOL)specifiesRequestClassName:(id)a0 revision:(unsigned long long)a1;
- (BOOL)specifiesAnyRequestClassName:(id)a0;
- (BOOL)specifiesAnyRequestClass:(Class)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)specifiesRequestClassName:(id)a0;
- (BOOL)specifiesRequestClass:(Class)a0 revision:(unsigned long long)a1;
- (id)description;
- (BOOL)specifiesRequestClassName:(id)a0 withAnyRevision:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithRequestClass:(Class)a0 name:(id)a1 code:(unsigned int)a2 revision:(unsigned long long)a3;
- (id)initWithCoder:(id)a0;
- (BOOL)specifiesRequestClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (Class)requestClassAndReturnError:(id *)a0;

@end
