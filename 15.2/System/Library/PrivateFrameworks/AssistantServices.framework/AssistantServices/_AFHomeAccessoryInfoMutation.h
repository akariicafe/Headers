@class NSString, NSUUID, AFHomeAccessoryInfo;

@interface _AFHomeAccessoryInfoMutation : NSObject <AFHomeAccessoryInfoMutating> {
    AFHomeAccessoryInfo *_baseModel;
    NSUUID *_uniqueIdentifier;
    NSUUID *_loggingUniqueIdentifier;
    NSString *_name;
    NSString *_model;
    NSString *_roomName;
    NSString *_assistantIdentifier;
    BOOL _isSpeaker;
    NSString *_manufacturer;
    NSString *_categoryType;
    long long _schemaCategoryType;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasUniqueIdentifier : 1; unsigned char hasLoggingUniqueIdentifier : 1; unsigned char hasName : 1; unsigned char hasModel : 1; unsigned char hasRoomName : 1; unsigned char hasAssistantIdentifier : 1; unsigned char hasIsSpeaker : 1; unsigned char hasManufacturer : 1; unsigned char hasCategoryType : 1; unsigned char hasSchemaCategoryType : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAssistantIdentifier:(id)a0;
- (void)setManufacturer:(id)a0;
- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setUniqueIdentifier:(id)a0;
- (void)setName:(id)a0;
- (void)setIsSpeaker:(BOOL)a0;
- (void)setLoggingUniqueIdentifier:(id)a0;
- (void)setSchemaCategoryType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setCategoryType:(id)a0;
- (void)setRoomName:(id)a0;
- (void)setModel:(id)a0;

@end
