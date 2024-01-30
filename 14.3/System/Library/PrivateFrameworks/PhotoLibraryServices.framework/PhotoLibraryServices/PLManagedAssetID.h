@class NSString;

@interface PLManagedAssetID : NSObject <PLAssetID>

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *directory;
@property (copy, nonatomic) NSString *libraryID;
@property (nonatomic) unsigned char bundleScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManagedAsset:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 filename:(id)a1 directory:(id)a2 libraryID:(id)a3 bundleScope:(unsigned char)a4;

@end
