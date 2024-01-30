@class NSString;

@interface DBZipArchiver : NSObject <DBArchiving>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)archiveDirectory:(id)a0 toLocation:(id)a1;
- (BOOL)unarchive:(id)a0 toLocation:(id)a1;

@end
