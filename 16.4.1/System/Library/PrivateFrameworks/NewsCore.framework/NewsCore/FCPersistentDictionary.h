@class NSURL, NSSet;

@interface FCPersistentDictionary : NSObject

@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSSet *allowedClasses;

- (id)read;
- (BOOL)writeWithAccessor:(id /* block */)a0;
- (id)initWithFileURL:(id)a0 allowedClasses:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
