@class NSString;

@interface ASFetchActivityStream : SAFetchActivityStream <AFServiceCommand>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performWithCompletion:(id /* block */)a0;
- (void)fetchActivityStreamWithPredicate:(id)a0 completion:(id /* block */)a1;

@end
