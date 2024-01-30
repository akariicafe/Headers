@class NSString;
@protocol HMDSettingsControllerDependency;

@interface HMDSettingsMetadataParser : NSObject <HMFLogging, HMDSettingsMetadataParserProtocol>

@property (readonly, weak) id<HMDSettingsControllerDependency> dependency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
