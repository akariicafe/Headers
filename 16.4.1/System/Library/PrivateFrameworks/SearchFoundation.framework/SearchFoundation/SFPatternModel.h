@class NSString, NSData, NSDictionary;

@interface SFPatternModel : NSObject <SFPatternModel, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *pattern_id;
@property (copy, nonatomic) NSData *pattern_parameters;
@property (copy, nonatomic) NSString *pattern_bundle_id;
@property (copy, nonatomic) NSString *pattern_template_directory;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;

@end
