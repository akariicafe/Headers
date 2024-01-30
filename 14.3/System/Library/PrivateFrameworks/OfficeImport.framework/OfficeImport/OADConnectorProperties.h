@class OADConnection;

@interface OADConnectorProperties : OADShapeProperties {
    OADConnection *mFrom;
    OADConnection *mTo;
}

+ (id)defaultProperties;

- (id)to;
- (id)from;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDefaults;

@end
