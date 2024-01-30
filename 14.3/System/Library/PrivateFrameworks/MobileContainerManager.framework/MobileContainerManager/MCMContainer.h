@class NSUUID, NSString, NSURL, NSDictionary;

@interface MCMContainer : NSObject {
    NSString *_identifier;
    NSUUID *_uuid;
    NSString *_personaUniqueString;
    long long _containerClass;
    struct container_object_s { } *_thisContainer;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) struct container_object_s { } *thisContainer;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly, nonatomic) long long containerClass;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic, getter=isTemporary) BOOL temporary;

+ (long long)typeContainerClass;
+ (id)temporaryContainerWithIdentifier:(id)a0 existed:(BOOL *)a1 error:(id *)a2;
+ (id)containerWithIdentifier:(id)a0 createIfNecessary:(BOOL)a1 existed:(BOOL *)a2 error:(id *)a3;
+ (id)containerWithIdentifier:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_errorOccurred;
- (unsigned long long)hash;
- (id)uuid;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToContainer:(id)a0;
- (void)markDeleted;
- (struct container_object_s { } *)getLowLevelContainerObject;
- (id)initWithIdentifier:(id)a0 path:(id)a1 uniquePathComponent:(id)a2 uuid:(id)a3 personaUniqueString:(id)a4 error:(id *)a5;
- (id)initWithIdentifier:(id)a0 createIfNecessary:(BOOL)a1 existed:(BOOL *)a2 temp:(BOOL)a3 error:(id *)a4;
- (id)destroyContainerWithCompletion:(id /* block */)a0;
- (BOOL)setInfoValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)infoValueForKey:(id)a0 error:(id *)a1;
- (BOOL)recreateDefaultStructureWithError:(id *)a0;
- (BOOL)regenerateDirectoryUUIDWithError:(id *)a0;
- (unsigned long long)diskUsageWithError:(id *)a0;
- (BOOL)_obj1:(id)a0 isEqualToObj2:(id)a1;

@end
