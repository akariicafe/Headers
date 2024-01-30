@class NSString, GEODefaultsDBCollection;

@interface GEODefaultsDBValue : NSObject

@property (readonly, weak, nonatomic) GEODefaultsDBCollection *parent;
@property (nonatomic) long long dbId;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) id value;

+ (id)dbValue:(id)a0 type:(id)a1 value:(id)a2;

- (void).cxx_destruct;
- (id)initWithParent:(id)a0 type:(id)a1 value:(id)a2;

@end
