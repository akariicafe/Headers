@class NSUUID, NSString, NSArray, NSMutableDictionary;
@protocol HMSettingGroupDataSource;

@interface HMSettingGroup : NSObject <HMSettingDataSource, HMSettingGroupDataSource, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_settings;
    NSMutableDictionary *_groups;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) id<HMSettingGroupDataSource> dataSource;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *localizedTitle;
@property (readonly, copy) NSArray *settings;
@property (readonly, copy) NSArray *groups;
@property (readonly, copy) NSString *keyPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addGroup:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)parentKeyPathForSettingGroup:(id)a0;
- (void)addSetting:(id)a0;
- (id)_descriptionWithDepth:(unsigned long long)a0;
- (id)parentKeyPathForSetting:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 groups:(id)a2 settings:(id)a3;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
