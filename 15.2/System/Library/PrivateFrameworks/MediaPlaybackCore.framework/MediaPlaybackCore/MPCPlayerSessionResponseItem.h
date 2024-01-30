@class NSString, MPModelGenericObject, MPCPlayerSessionResponse, NSIndexPath;

@interface MPCPlayerSessionResponseItem : NSObject

@property (readonly, weak, nonatomic) MPCPlayerSessionResponse *response;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) NSString *contentItemIdentifier;
@property (readonly, nonatomic) MPModelGenericObject *metadataObject;

- (id)remove;
- (id)initWithModelGenericObject:(id)a0 indexPath:(id)a1 response:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)play;
- (unsigned long long)hash;
- (id)playOnPlayerPath:(id)a0;

@end
