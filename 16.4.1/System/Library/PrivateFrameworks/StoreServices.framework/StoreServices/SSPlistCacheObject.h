@class NSString, NSDictionary;

@interface SSPlistCacheObject : NSObject <SSCacheObject> {
    NSDictionary *_plist;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheObjectTypeIdentifier;

- (id)plist;
- (void)dealloc;
- (void)setPlist:(id)a0;
- (id)cacheObjectDataRepresentation;
- (id)cacheObjectTypeIdentifier;
- (id)initWithCacheObjectDataRepresentation:(id)a0;

@end
