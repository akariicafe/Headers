@class NSString;

@interface PGMusicCurationInflationContext : NSObject {
    void /* unknown type, empty encoding */ cache;
    void /* unknown type, empty encoding */ shouldForceMetadataRefetch;
    void /* unknown type, empty encoding */ actionSource;
}

@property (nonatomic, readonly) NSString *actionSource;

+ (id)contextWithMusicCache:(id)a0 actionSource:(id)a1 shouldForceMetadataRefetch:(BOOL)a2;

- (void).cxx_destruct;
- (id)init;

@end
