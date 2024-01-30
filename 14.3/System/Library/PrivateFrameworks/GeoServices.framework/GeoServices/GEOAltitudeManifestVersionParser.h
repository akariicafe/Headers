@class GEOFlyoverRegionVersions, NSString, NSURL, NSError;

@interface GEOAltitudeManifestVersionParser : NSObject <NSXMLParserDelegate> {
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _parsed;
    NSURL *_fileURL;
    GEOFlyoverRegionVersions *_versions;
    NSError *_parseError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
