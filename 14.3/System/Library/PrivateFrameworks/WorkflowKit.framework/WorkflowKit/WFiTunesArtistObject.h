@class NSString, NSDictionary;

@interface WFiTunesArtistObject : WFiTunesObject <MTLJSONSerializing>

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
