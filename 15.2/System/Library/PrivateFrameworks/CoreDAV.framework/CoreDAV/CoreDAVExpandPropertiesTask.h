@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask

@property (retain, nonatomic) NSMutableSet *propertiesToExpand;

- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)requestBody;
- (id)parseHints;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1 expandedName:(id)a2 expandedNameSpace:(id)a3;
- (id)description;
- (void).cxx_destruct;
- (void)addPropertyToExpandWithPropertiesToFind:(id)a0 expandedName:(id)a1 expandedNameSpace:(id)a2;

@end
