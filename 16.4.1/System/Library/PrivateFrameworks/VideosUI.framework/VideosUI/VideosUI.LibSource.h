@interface VideosUI.LibSource : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ ownerName;
    void /* unknown type, empty encoding */ libMenuRequests;
    void /* unknown type, empty encoding */ isMPDownloadingFetchInProgress;
    void /* unknown type, empty encoding */ _menuItems;
    void /* unknown type, empty encoding */ _selectedMenuItem;
    void /* unknown type, empty encoding */ _hasExecutedMenuFetchOnce;
}

- (void)localMPMediaLibraryContentChanged;
- (void)localMPMediaLibraryDownloadingDidChange;
- (void)refreshRentalMenu;
- (void)sideBandContentChanged;

@end
