@class NSDictionary;

@interface MRUHardwareInfo : NSObject <NSCoding>

@property (readonly) unsigned int chipID;
@property (readonly) unsigned int chipRev;
@property (readonly) unsigned int boardID;
@property (readonly) unsigned int securityEpoch;
@property (readonly) BOOL productionStatus;
@property (readonly) BOOL securityMode;
@property (readonly) unsigned int securityDomain;
@property (readonly) unsigned long long ecid;
@property (readonly) NSDictionary *asDictionary;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)initWithChipID:(unsigned int)a0 chipRev:(unsigned int)a1 boardID:(unsigned int)a2 securityEpoch:(unsigned int)a3 productionStatus:(BOOL)a4 securityMode:(BOOL)a5 securityDomain:(unsigned int)a6 ecid:(unsigned long long)a7;

@end
