@class NSString;

@interface _MPMediaLibraryArtworkVisualIdenticalityIdentifier : NSObject <MPArtworkDataSourceVisualIdenticality>

@property (readonly, nonatomic) long long artworkType;
@property (readonly, nonatomic) NSString *availableArtworkToken;
@property (readonly, nonatomic) NSString *fetchableArtworkToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stringRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)colorToHex:(id)a0;
- (id)initWithArtworkType:(long long)a0 availableArtworkToken:(id)a1 fetchableArtworkToken:(id)a2;

@end
