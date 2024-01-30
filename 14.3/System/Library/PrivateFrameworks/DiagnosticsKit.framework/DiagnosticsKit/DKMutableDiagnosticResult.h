@class NSNumber, NSDictionary, NSArray;

@interface DKMutableDiagnosticResult : DKDiagnosticResult

@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSArray *files;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
