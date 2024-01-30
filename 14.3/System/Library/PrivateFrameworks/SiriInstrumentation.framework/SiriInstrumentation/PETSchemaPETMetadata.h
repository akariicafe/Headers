@class NSString, NSData;

@interface PETSchemaPETMetadata : PBCodable {
    struct { unsigned char upload_time : 1; unsigned char is_internal : 1; unsigned char is_seed : 1; unsigned char is_gm : 1; unsigned char config_version : 1; unsigned char is_internal_carry : 1; unsigned char is_config_enabled : 1; unsigned char is_testing_data : 1; unsigned char is_trial_upload : 1; } _has;
}

@property (nonatomic) unsigned long long upload_time;
@property (nonatomic) BOOL hasUpload_time;
@property (copy, nonatomic) NSString *platform;
@property (nonatomic) BOOL hasPlatform;
@property (copy, nonatomic) NSString *device;
@property (nonatomic) BOOL hasDevice;
@property (copy, nonatomic) NSString *build;
@property (nonatomic) BOOL hasBuild;
@property (nonatomic) BOOL is_internal;
@property (nonatomic) BOOL hasIs_internal;
@property (nonatomic) BOOL is_seed;
@property (nonatomic) BOOL hasIs_seed;
@property (nonatomic) BOOL is_gm;
@property (nonatomic) BOOL hasIs_gm;
@property (copy, nonatomic) NSString *country;
@property (nonatomic) BOOL hasCountry;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) BOOL hasLanguage;
@property (nonatomic) unsigned int config_version;
@property (nonatomic) BOOL hasConfig_version;
@property (copy, nonatomic) NSString *pseudo_device_id;
@property (nonatomic) BOOL hasPseudo_device_id;
@property (nonatomic) BOOL is_internal_carry;
@property (nonatomic) BOOL hasIs_internal_carry;
@property (nonatomic) BOOL is_config_enabled;
@property (nonatomic) BOOL hasIs_config_enabled;
@property (copy, nonatomic) NSString *message_group;
@property (nonatomic) BOOL hasMessage_group;
@property (copy, nonatomic) NSString *msg_type;
@property (nonatomic) BOOL hasMsg_type;
@property (nonatomic) BOOL is_testing_data;
@property (nonatomic) BOOL hasIs_testing_data;
@property (nonatomic) BOOL is_trial_upload;
@property (nonatomic) BOOL hasIs_trial_upload;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
