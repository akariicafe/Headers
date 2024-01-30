@class NSString, HMImmutableSettingsProtoBoolSettingEvent, HMImmutableSettingsProtoStringSettingEvent, HMImmutableSettingsProtoLanguageSettingEvent, HMImmutableSettingsProtoAvailableLanguageListEvent, HMImmutableSettingsProtoBoundedIntegerSettingEvent;

@interface HMImmutableSettingsProtoSettingChangeEvent : PBCodable <NSCopying> {
    struct { unsigned char settingChangeEvent : 1; unsigned char readOnly : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKeyPath;
@property (retain, nonatomic) NSString *keyPath;
@property (nonatomic) BOOL hasReadOnly;
@property (nonatomic) BOOL readOnly;
@property (readonly, nonatomic) BOOL hasStringSetting;
@property (retain, nonatomic) HMImmutableSettingsProtoStringSettingEvent *stringSetting;
@property (readonly, nonatomic) BOOL hasBoundedIntegerSetting;
@property (retain, nonatomic) HMImmutableSettingsProtoBoundedIntegerSettingEvent *boundedIntegerSetting;
@property (readonly, nonatomic) BOOL hasBoolSetting;
@property (retain, nonatomic) HMImmutableSettingsProtoBoolSettingEvent *boolSetting;
@property (readonly, nonatomic) BOOL hasLanguageSetting;
@property (retain, nonatomic) HMImmutableSettingsProtoLanguageSettingEvent *languageSetting;
@property (readonly, nonatomic) BOOL hasAvailableLanguages;
@property (retain, nonatomic) HMImmutableSettingsProtoAvailableLanguageListEvent *availableLanguages;
@property (nonatomic) BOOL hasSettingChangeEvent;
@property (nonatomic) int settingChangeEvent;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)settingChangeEventAsString:(int)a0;
- (int)StringAsSettingChangeEvent:(id)a0;
- (void)clearOneofValuesForSettingChangeEvent;

@end
