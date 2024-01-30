@class NSString;

@interface GEOServiceRequestDefaultConfig : NSObject <GEOServiceRequestConfiguring>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugRequestName;
- (id)additionalHTTPHeaders;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKindForRequest:(id)a0 traits:(id)a1;
- (id)additionalURLQueryItems;
- (id)serviceTypeNumber;
- (unsigned long long)urlType;

@end
