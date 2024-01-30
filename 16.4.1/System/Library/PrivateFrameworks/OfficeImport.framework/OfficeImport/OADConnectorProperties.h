@class OADConnection;

@interface OADConnectorProperties : OADShapeProperties {
    OADConnection *mFrom;
    OADConnection *mTo;
}

+ (id)defaultProperties;

- (id)init;
- (id)description;
- (id)initWithDefaults;
- (void).cxx_destruct;
- (id)from;
- (id)to;

@end
