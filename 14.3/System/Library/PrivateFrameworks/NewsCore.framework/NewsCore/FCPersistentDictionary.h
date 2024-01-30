@class NSURL, NSSet;

@interface FCPersistentDictionary : NSObject

@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSSet *allowedClasses;

- (id)init;
- (void).cxx_destruct;
- (id)read;
- (id)initWithFileURL:(id)a0 allowedClasses:(id)a1;
- (BOOL)writeWithAccessor:(id /* block */)a0;

@end
