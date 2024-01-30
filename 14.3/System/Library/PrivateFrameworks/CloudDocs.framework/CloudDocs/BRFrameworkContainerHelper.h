@class NSString;

@interface BRFrameworkContainerHelper : NSObject <BRContainerHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchContainerForURL:(id)a0;
- (id)fetchAllContainersByIDWithError:(id *)a0;
- (BOOL)canFetchAllContainersByID;
- (id)itemIDForURL:(id)a0 error:(id *)a1;
- (unsigned short)br_capabilityToMoveFromURL:(id)a0 toNewParent:(id)a1 error:(id *)a2;

@end
