@class NSArray, NSString, GEOResource, NSData;

@interface GEOResourceInfo : NSObject

@property (copy, nonatomic) NSArray *equivalentResources;
@property (readonly, nonatomic) GEOResource *resource;
@property (readonly, nonatomic) int validationMethod;
@property (copy, nonatomic) NSString *eTag;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSData *checksum;

- (id)initWithResource:(id)a0;
- (BOOL)validateResource:(id)a0 log:(id)a1;
- (BOOL)validateResourceAtPath:(id)a0 useExtendedAttrs:(BOOL)a1 log:(id)a2;
- (BOOL)shouldCheckForUpdateForResourceAtPath:(id)a0 useExtendedAttrs:(BOOL)a1 forceUpdateCheck:(BOOL)a2 log:(id)a3;
- (id)description;
- (void).cxx_destruct;

@end
