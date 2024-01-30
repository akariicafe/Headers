@class NSString, MPModelGenericObject, MPCPlayerSessionResponse, NSIndexPath;

@interface MPCPlayerSessionResponseItem : NSObject

@property (readonly, weak, nonatomic) MPCPlayerSessionResponse *response;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) NSString *contentItemIdentifier;
@property (readonly, nonatomic) MPModelGenericObject *metadataObject;

- (id)remove;
- (id)initWithModelGenericObject:(id)a0 indexPath:(id)a1 response:(id)a2;
- (id)play;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)playOnPlayerPath:(id)a0;

@end
