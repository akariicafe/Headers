@class NSString;

@interface IPAAutoSettings : NSObject <IPAAutoSettings>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL pending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pendingWithIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)archiveDictionary;
- (BOOL)_applyArchiveDictionary:(id)a0;
- (BOOL)applyArchiveDictionary:(id)a0;
- (void)_archiveIntoDictionary:(id)a0;
- (BOOL)isEqualToAutoSettings:(id)a0;

@end
