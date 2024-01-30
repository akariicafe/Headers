@class NSSet, NSString;

@interface HUCameraUsageOptionItem : HFItem

@property (readonly, nonatomic) unsigned long long presence;
@property (readonly, nonatomic) unsigned long long usage;
@property (readonly, nonatomic) unsigned long long sortOrder;
@property (readonly, copy, nonatomic) NSSet *cameraProfiles;
@property (readonly, nonatomic) NSString *privacyDescription;
@property (nonatomic) BOOL updateInProgress;

+ (unsigned long long)sortOrderForUsage:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithPresence:(unsigned long long)a0 cameraUsage:(unsigned long long)a1 cameraProfiles:(id)a2;

@end
