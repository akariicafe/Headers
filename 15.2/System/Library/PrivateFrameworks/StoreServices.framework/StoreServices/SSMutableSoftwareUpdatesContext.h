@class NSString, NSArray;

@interface SSMutableSoftwareUpdatesContext : SSSoftwareUpdatesContext <SSXPCCoding>

@property (copy, nonatomic) NSString *clientIdentifierHeader;
@property (nonatomic, getter=isForced) BOOL forced;
@property (copy, nonatomic) NSArray *softwareTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
