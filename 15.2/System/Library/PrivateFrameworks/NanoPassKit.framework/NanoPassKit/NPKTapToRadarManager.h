@interface NPKTapToRadarManager : NSObject

- (void)_openTapToRadarWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_requestUserPermisionToFileRadarWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)_applicationWorkSpace;
- (void)fileRadarWithRequest:(id)a0 requestUserPermision:(BOOL)a1 completion:(id /* block */)a2;

@end
