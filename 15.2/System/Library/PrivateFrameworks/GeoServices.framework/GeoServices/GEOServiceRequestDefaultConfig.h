@class NSString;

@interface GEOServiceRequestDefaultConfig : NSObject <GEOServiceRequestConfiguring>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)urlType;
- (id)additionalHTTPHeaders;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKindForRequest:(id)a0 traits:(id)a1;
- (id)serviceTypeNumber;
- (id)additionalURLQueryItems;
- (id)debugRequestName;

@end
