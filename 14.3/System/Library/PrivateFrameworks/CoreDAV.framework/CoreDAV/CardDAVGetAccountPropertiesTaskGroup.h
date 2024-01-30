@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup

@property (readonly, nonatomic) NSSet *addressBookHomes;
@property (readonly, nonatomic) NSSet *directoryGatewayURLs;

- (void).cxx_destruct;
- (id)description;
- (id)homeSet;
- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)a0;
- (id)directoryGatewayURL;

@end
