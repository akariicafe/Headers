@class NSString, NSArray;

@interface GEOConfigStorageFallbackReader : NSObject <GEOConfigStorageReadOnly> {
    NSArray *_storage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
