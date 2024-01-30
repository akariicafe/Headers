@class OADConnection;

@interface OADConnectorProperties : OADShapeProperties {
    OADConnection *mFrom;
    OADConnection *mTo;
}

+ (id)defaultProperties;

- (id)to;
- (id)initWithDefaults;
- (id)description;
- (void).cxx_destruct;
- (id)from;
- (id)init;

@end
