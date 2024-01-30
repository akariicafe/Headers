@class NSUUID, NSString, NSSet, NSExtension;

@interface DKReporterAttributes : NSObject <DKExtensionAttributes, NSCopying>

@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSSet *manifest;
@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic, getter=isHeadless) BOOL headless;
@property (readonly, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithExtension:(id)a0;
- (void)_validateAndAddDomain:(id)a0 withInfo:(id)a1 toManifest:(id)a2;
- (void)_validateAndAddExtensionManifest:(id)a0 toManifest:(id)a1;
- (BOOL)isEqualToReportGeneratorAttributes:(id)a0;

@end
