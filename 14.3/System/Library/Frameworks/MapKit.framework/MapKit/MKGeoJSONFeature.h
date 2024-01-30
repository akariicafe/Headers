@class NSString, NSData, NSArray;

@interface MKGeoJSONFeature : NSObject <MKGeoJSONObject>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *properties;
@property (readonly, nonatomic) NSArray *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_initWithGeoJSONObject:(id)a0 error:(id *)a1;
- (id)_initWithProperties:(id)a0 geometry:(id)a1 identifier:(id)a2;

@end
