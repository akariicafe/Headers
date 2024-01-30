@class NSURL;

@interface CARPFCache : CARPFObject

@property (class, readonly) CARPFCache *defaultCache;

@property (readonly, copy) NSURL *URL;
@property (readonly, getter=isExists) BOOL exists;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;

@end
