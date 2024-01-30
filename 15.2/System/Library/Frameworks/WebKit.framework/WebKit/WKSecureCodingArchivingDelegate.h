@class NSString;

@interface WKSecureCodingArchivingDelegate : NSObject <NSKeyedArchiverDelegate, NSKeyedUnarchiverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)archiver:(id)a0 willEncodeObject:(id)a1;
- (id)unarchiver:(id)a0 didDecodeObject:(id)a1;

@end
