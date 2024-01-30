@class NSString;

@interface HDNumberParameter : NSObject <HDParameterDescription>

@property (retain, nonatomic) NSString *summary;
@property (nonatomic) BOOL required;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)validateValue:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSummary:(id)a0 required:(BOOL)a1;

@end
