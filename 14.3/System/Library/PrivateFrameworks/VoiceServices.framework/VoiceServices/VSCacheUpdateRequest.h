@class NSString;

@interface VSCacheUpdateRequest : NSObject {
    NSString *_modelID;
    NSString *_classID;
}

- (id)modelIdentifier;
- (void)dealloc;
- (id)initWithModelIdentifier:(id)a0 classIdentifier:(id)a1;
- (id)coalescedRequest:(id)a0;
- (id)description;
- (id)classIdentifier;

@end
