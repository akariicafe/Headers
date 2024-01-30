@class NSString, NSData;

@interface QLExternallyCachedThumbnailData : NSObject <PQLResultSetInitializer>

@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSData *versionIdentifier;
@property (readonly, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
