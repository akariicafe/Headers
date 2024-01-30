@class WBSParsecImageRepresentation, NSString;

@interface WBSParsecSportsImage : WBSParsecModel

@property (readonly, nonatomic) long long alignment;
@property (readonly, nonatomic) WBSParsecImageRepresentation *imageRepresentation;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)schema;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
