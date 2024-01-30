@class NSString;

@interface CKVSkitEmptyAccess : NSObject <CKVSkitReadAccess>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)matchSpansOfTokenChain:(id)a0 error:(id *)a1;
- (id)indexLocale;
- (id)searchHitsForQuery:(id)a0 locale:(id)a1 error:(id *)a2;

@end
