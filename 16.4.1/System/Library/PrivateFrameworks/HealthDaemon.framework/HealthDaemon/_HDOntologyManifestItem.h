@class NSString, NSURL;

@interface _HDOntologyManifestItem : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *schemaType;
@property (readonly, nonatomic) long long schemaVersion;
@property (readonly, nonatomic) long long version;
@property (readonly, copy, nonatomic) NSString *region;
@property (readonly, copy, nonatomic) NSString *locale;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *checksum;
@property (readonly, nonatomic) long long size;

+ (id)manifestItemFromLine:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;

@end
