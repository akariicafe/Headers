@class NSString;

@interface MKPhotoLibraryAsset : NSObject

@property (nonatomic) unsigned long long size;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *collection;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long rowID;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0 filename:(id)a1 collection:(id)a2 size:(unsigned long long)a3;

@end
