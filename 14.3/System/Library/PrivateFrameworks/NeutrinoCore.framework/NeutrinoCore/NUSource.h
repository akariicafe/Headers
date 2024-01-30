@class NSString, NUIdentifier;

@interface NUSource : NSObject <NUIdentifiable>

@property (copy, nonatomic) NSString *assetIdentifier;
@property (readonly, nonatomic) NUIdentifier *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToSource:(id)a0;
- (id)sourceDefinition:(out id *)a0;

@end
