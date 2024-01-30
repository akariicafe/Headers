@class NSString, NSNumber;

@interface IFResourceMetadata : NSObject <IFResourceMetadata>

@property (retain) NSString *name;
@property (retain) NSNumber *dimension;
@property (retain) NSNumber *scale;
@property BOOL selectedVariant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metadataWithFileName:(id)a0;

- (void).cxx_destruct;

@end
