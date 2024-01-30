@class NSString;

@interface MSPFavoritesReplicaMergeOptions : NSObject <MSPFavoritesReplicaMergeOptions>

@property (readonly, getter=isDeserializationAllowed) BOOL deserializationAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDeserializationAllowed:(BOOL)a0;

@end
