@class NSString, NSUUID;

@interface IPAEditOperation : NSObject <NSObject, NSCopying> {
    NSUUID *_UUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presetifyAdjustment:(id)a0;

- (void)setUUID:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)UUID;
- (id)settingsDictionary;
- (BOOL)isEqual:(id)a0;
- (id)autoIdentifier;
- (id)initWithOperation:(id)a0;
- (id)identifier;
- (id)archivalRepresentation;
- (id)initWithSettingsDictionary:(id)a0;
- (BOOL)isEqualToOperation:(id)a0;

@end
