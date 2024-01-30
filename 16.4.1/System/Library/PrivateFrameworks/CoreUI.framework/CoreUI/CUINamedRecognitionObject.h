@class NSData;

@interface CUINamedRecognitionObject : CUINamedLookup

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSData *objectData;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } referenceOriginTransformation;

- (id)initWithName:(id)a0 usingRenditionKey:(id)a1 fromTheme:(unsigned long long)a2;
- (id)description;

@end
