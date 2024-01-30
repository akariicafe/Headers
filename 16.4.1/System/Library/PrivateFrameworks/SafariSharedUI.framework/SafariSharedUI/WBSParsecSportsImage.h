@class WBSParsecImageRepresentation, NSString;

@interface WBSParsecSportsImage : WBSParsecModel

@property (readonly, nonatomic) long long alignment;
@property (readonly, nonatomic) WBSParsecImageRepresentation *imageRepresentation;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)schema;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
