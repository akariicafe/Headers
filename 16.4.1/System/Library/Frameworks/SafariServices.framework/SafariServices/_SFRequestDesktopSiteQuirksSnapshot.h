@class NSString, NSDictionary;

@interface _SFRequestDesktopSiteQuirksSnapshot : NSObject <WBSRemotePlistSnapshot> {
    NSDictionary *_requestDesktopSiteQuirks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlistData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)plistDataWithFormat:(unsigned long long)a0;
- (id)allRequestDesktopSiteQuirks;
- (id)requestDesktopSiteSettingForDomain:(id)a0;

@end
