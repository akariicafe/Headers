@class NSURL;

@interface HMFCache : HMFObject

@property (class, readonly) HMFCache *defaultCache;

@property (readonly, copy) NSURL *URL;
@property (readonly, getter=isExists) BOOL exists;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
