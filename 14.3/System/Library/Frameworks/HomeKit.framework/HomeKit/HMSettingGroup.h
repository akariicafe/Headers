@class NSUUID, NSString, NSArray, NSMutableArray;

@interface HMSettingGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *identifier;
@property (copy) NSString *keyPath;
@property (readonly, copy) NSString *name;
@property (retain) NSMutableArray *internalSettings;
@property (retain) NSMutableArray *internalGroups;
@property (readonly, copy) NSString *localizedTitle;
@property (readonly, copy) NSArray *settings;
@property (readonly, copy) NSArray *groups;

- (void)merge:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)addGroup:(id)a0;
- (void)addSetting:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 groups:(id)a2 settings:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
