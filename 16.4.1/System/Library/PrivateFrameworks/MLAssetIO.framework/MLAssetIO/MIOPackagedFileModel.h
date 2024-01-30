@class NSDictionary, NSString, MIOModelDescription, NSURL, NSArray, MIOVersionInfo, NSObject;
@protocol MIOModeling;

@interface MIOPackagedFileModel : NSObject <MIOModeling>

@property (copy, nonatomic) NSURL *packageURL;
@property (copy, nonatomic) NSObject<MIOModeling> *specificationFileModel;
@property (readonly, copy, nonatomic) MIOVersionInfo *specificationVersion;
@property (readonly, copy, nonatomic) NSString *modelTypeName;
@property (copy, nonatomic) MIOModelDescription *modelDescription;
@property (readonly, copy, nonatomic) NSArray *layers;
@property (readonly, copy, nonatomic) NSArray *subModels;
@property (readonly, copy, nonatomic) NSDictionary *layerHistogram;
@property (readonly, nonatomic) void *irProgram;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
