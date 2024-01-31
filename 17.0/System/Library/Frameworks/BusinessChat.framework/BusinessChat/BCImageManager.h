@class NSString;
@protocol BCNetworkProviderProtocol;

@interface BCImageManager : NSObject <BCImageManagerProtocol> {
    id<BCNetworkProviderProtocol> _networkProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchBrandIconDataForMapItem:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 allowSmaller:(BOOL)a2 completion:(id /* block */)a3;
- (void)_fetchNavBarBrandIconDataForMapItem:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 allowSmaller:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchBrandIconDataForMapItem:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 allowSmaller:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchNavBarBrandIconDataForMapItem:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 allowSmaller:(BOOL)a2 completion:(id /* block */)a3;

@end
