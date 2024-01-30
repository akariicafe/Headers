@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask

@property (retain, nonatomic) NSMutableSet *propertiesToExpand;

- (void).cxx_destruct;
- (id)requestBody;
- (id)description;
- (id)httpMethod;
- (id)parseHints;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (void)addPropertyToExpandWithPropertiesToFind:(id)a0 expandedName:(id)a1 expandedNameSpace:(id)a2;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1 expandedName:(id)a2 expandedNameSpace:(id)a3;

@end
